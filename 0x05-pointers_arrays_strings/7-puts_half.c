#include "main.h"

/**
* puts_half - a function that prints half of a string,
*		followed by a new line.
* @str: input for parameters.
* Return: void;
*/

void puts_half(char *str)
{
	for (int m = 0, str[m] != '\0'; m++)
		;
	m++;
	{
		int n = str[m] / 2;

		_putchar(str[n]);
	}
	_putchar('\n');
}
