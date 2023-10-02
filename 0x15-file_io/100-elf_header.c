#include "main.h"
#include <elf.h>

void print_osabi_morre(Elf64_Ehdr h);

/**
 * print_magic - a function that used to print magic bytes.
 * @h: structure of ELF header.
 */

void print_magic(Elf64_Ehdr h)
{
	int n;

	printf("  Magic:   ");
	for (n = 0; n < EI_NIDENT; n++)
		printf("%2.2x%s", h.e_ident[n], n == EI_NIDENT - 1 ? "\n" : " ");
}

/**
 * print_class - a function that used to print ELF class.
 * @h: structure of ELF header.
 */

void print_class(Elf64_Ehdr h)
{
	printf("  Class:                             ");
	switch (h.e_ident[EI_CLASS])
	{
		case ELFCLASS64:
			printf("ELF64");
		break;
		case ELFCLASS32:
			printf("ELF32");
		break;
		case ELFCLASSNONE:
			printf("none");
		break;
	}
	printf("\n");
}

/**
 * print_data - a function that used to prints ELF data.
 * @h:structure of ELF header.
 */

void print_data(Elf64_Ehdr h)
{
	printf("  Data:                              ");
	switch (h.e_ident[EI_DATA])
	{
		case ELFDATA2MSB:
			printf("2's complement, big endian");
		break;
		case ELFDATA2LSB:
			printf("2's complement, little endian");
		break;
		case ELFDATANONE:
			printf("none");
		break;
	}
	printf("\n");
}

/**
 * print_version - a function that used to print ELF version.
 * @h: structure of ELF header.
 */

void print_version(Elf64_Ehdr h)
{
	printf("  Version:                           %d", h.e_ident[EI_version]);
	switch (h.e_ident[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)");
		break;
		case EV_NONE:
			printf("%s", "");
		break;
		break;
	}
	printf("\n");
}

/**
 * print_osabi - a function that used to prints ELF osabi.
 * @h: structure of ELF header.
 */

void print_osabi(Elf64_Ehdr h)
{
	printf("  OS/ABI:                            ");
	switch (h->e_ident[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris");
		break;
	case ELFOSABI_AIX:
		printf("UNIX - AIX");
	break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64");
		break;
	default:
		print_osabi_morre(h);
		break;
	}
	printf("\n");
}

/**
 * print_osabi_morre - a function that used to print ELF osabi.
 * @h: structure of ELF header.
 */

void print_osabi_morre(Elf64_Ehdr h)
{
	switch (h->e_ident[EI_OSABI])
	{
		case ELFOSABI_MODESTO:
			printf("Novell - Modesto");
		break;
		case ELFOSABI_OPENBSD:
			printf("UNIX - OpenBSD");
		break;
		case ELFOSABI_ARM:
			printf("ARM");
		break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App");
		break;
		default:
			printf("<unknown: %x>", h->e_ident[EI_OSABI]);
		break;
	}
}

/**
 * print_abiversion - a function that used to prints ELF abi version
 * @h: structure of ELF header.
 */

void print_abiversion(Elf64_Ehdr h)
{
	printf("  ABI Version:                       %d\n",
			h.e_ident[EI_ABIVERSION]);
}
/**
 * print_type - a function that used to print ELF type.
 * @h: structure of ELF header.
 */

void print_type(Elf64_Ehdr h)
{
	char *m = (char *)&h.e_type;
	int n = 0;

	printf("  Type:                              ");
	if (h.e_ident[EI_DATA] == ELFDATA2MSB)
		n = 1;
	switch (m[n])
	{
		case ET_NONE:
		printf("NONE (None)");
		break;
	case ET_REL:
		printf("REL (Relocatable file)");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)");
		break;
	case ET_CORE:
		printf("CORE (Core file)");
		break;
	default:
		printf("<unknown>: %x", m[n]);
		break;
	}
	printf("\n");
}

/**
 * print_entry - afunction that used to prints ELF entry points.
 * @h: structure of ELF header.
 */

void print_entry(Elf64_Ehdr h)
{
	int n = 0;
	int length = 0;
	unsigned char *m = (unsigned char *)&h.e_entry;

	printf("  Entry point address:               0x");
	if (h.e_ident[EI_DATA] != ELFDATA2MSB)
	{
		n = h.e_ident[EI_CLASS] == ELFCLASS64 ? 7 : 3;
		while (!m[n])
			n--;
		printf("%x", m[n--]);
		for (; n >= 0; n--)
			printf("%02x", m[n]);
		printf("\n");
	}
	else
	{
		n = 0;
		length = h.e_ident[EI_CLASS] == ELFCLASS64 ? 7 : 3;
		while (!m[n])
			n++;
		printf("%x", m[n++]);
		for (; n <= length; n++)
			printf("%02x", m[n]);
		printf("\n");
	}
}

/**
 * main - write a program that displays the information contained in
 *	the ELF header at the start of an ELF file.
 * @av: argements.
 * @ac: counter of srguments.
 * Return: 0 (fails) or 1 (success)
 */

int main(int ac, char **av)
{
	int file;
	ssize_t m;
	Elf64_Ehdr h;

	if (ac != 2)
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n"), exit(98);
	file = open(av[1], O_RDONLY);
	if (file == -1)
		dprintf(STDERR_FILENO, "Can't open file: %s\n", av[1]), exit(98);
	m = read(file, &h, sizeof(h));
	if (m < 1 || m != sizeof(h))
		dprintf(STDERR_FILENO, "Can't read from file: %s\n", av[1]), exit(98);
	if (h.e_ident[0] == 0x7f && h.e_ident[1] == 'E'
			&& h.e_ident[2] == 'L' && h.e_ident[3] == 'F')
	{
		printf("ELF Header:\n");
	}
	else
		dprintf(STDERR_FILENO, "Not ELF file: %s\n", av[1]), exit(98);

	print_magic(h);
	print_class(h);
	print_data(h);
	print_version(h);
	print_osabi(h);
	print_abiversion(h);
	print_type(h);
	print_entry(h);
	if (close(file))
		dprintf(STDERR_FILENO, "Error closing file descriptor: %d\n",
				file), exit(98);
	return (EXIT_SUCCESS);
}