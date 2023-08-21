#include "main.h"

/**
* _puts - a function that prints a string,
*	followed by a new line, to stdout.
* @str: input for string.
* Return: void.
*/

void _puts(char *str)
{

	for (*str = 0; *str != '\0'; str++)
	{
		_putchar(*str + 0);
	}
	_putchar('\n');
}
