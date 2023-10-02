#include "main.h"

/**
 * _strlen - a function that give the length of string.
 * @m: input string.
 * Return: string length.
 */

int _strlen(char *m)
{
	int n = 0;

	if (!m)
		return (0);
	while (*m++)
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
	int file;
	ssize_t n_byte = 0;
	ssize_t length = _strlen(text_content);

	if (!filename)
		return (-1);
	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC | S_IRUSR | S_IWUSR);
	if (file == -1)
		return (-1);
	if (length)
		n_byte = write(file, text_content, length);
	close(file);
	return (n_byte == length ? 1 : -1);
}
