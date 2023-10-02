#include "main.h"

/**
 * read_textfile - a function that reads a text file and prints it to
 *			the POSIX standard output.
 * @filename: filename.
 * @letters: letter numbers.
 * Return: bytes number of letters.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t n_byte;
	char buffer[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	n_byte = read(file, &buffer[0], letters);
	n_byte = write(STDOUT_FILENO, &buffer[0], n_byte);
	close(file);
	return (n_byte);
}
