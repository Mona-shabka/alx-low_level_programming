#include "main.h"

/**
* _puts - a function that prints a string,
*       followed by a new line, to stdout.
* @str: input for string.
* Return: void.
*/

void _puts(char *str)
{
	do {
		_putchar(*str);
		str++;
	}
	while (*str != '\0')

	_putchar('\n');
}
