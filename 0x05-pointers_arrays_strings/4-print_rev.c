#include "main.h"

/**
* print_rev - a function that prints a string, in reverse,
*		followed by a new line.
* @s: input for string.
* Return: void.
*/

void print_rev(char *s)
{
	int m = 0;

	while (*s[m] != '\0')
	{
		m++;
	}

	while (m--)
	{
		_putchar(*s[m]);
	}
	_putchar('\n');
}
