#include "main.h"

/**
* puts2 - a function that prints every other character of a string,
*		starting with the first character,
*		followed by a new line.
* @str: input for parameter.
* Return: void.
*/

void puts2(char *str)
{
	int m = 0;

	while (str[m] != '\0')
	{
	if (m % 2 == 0)
		_putchar(str[m]);
		m++;
	}
	_putchar('\n');
}
