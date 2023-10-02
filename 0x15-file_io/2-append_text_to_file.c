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
 * append_text_to_file - a function that appends text at the end of a file
 * @filename: is the name of the file.
 * @text_content: is the NULL terminated string to add at
 *			the end of the file
 * Return: 1 on success, -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	ssize_t n_byte = 0;
	ssize_t length = _strlen(text_content);

	if (!filename)
		return (-1);
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);
	if (length)
		n_byte = write(file, text_content, length);
	close(file);
	return (n_byte == length ? 1 : -1);
}
