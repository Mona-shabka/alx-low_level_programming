#include "main.h"

/**
* puts_half - a function that prints half of a string,
*		followed by a new line.
* @str: input for parameters.
* Return: void;
*/

void puts_half(char *str)
{
	for (int m = -1; str[m] != '\0'; m++)
		;

	for (m /= 2; str[m] != '\0'; m++)
	{
		_putchar(str[m]);
	}
	_putchar('\n');
}
