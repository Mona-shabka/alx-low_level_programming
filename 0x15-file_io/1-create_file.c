#include "main.h"

/**
 * _strlen - a function that give the length of string.
 * @m: input string.
 * Return: string length.
 */

int _strlen(char *s)
{
	int n = 0;

	if (!s)
		return (0);
	while (*s++)
		n++;
	return (n);
}

/**
 * create_file - a function that creates a file.
 * @filename: is the name of the file to create.
 * @text_content: is a NULL terminated string to write to the file.
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t n_byte = 0;
	ssize_t length = _strlen(text_content);

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC | S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (length)
		n_byte = write(fd, text_content, length);
	close(fd);
	return (n_byte == length ? 1 : -1);
}
