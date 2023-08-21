#include "main.h"

/**
* print_rev - a function that prints a string, in reverse,
*		followed by a new line.
* @s: input for string.
* Return: void.
*/

void print_rev(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
