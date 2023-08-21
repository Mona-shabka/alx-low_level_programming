#include "main.h"

/**
* puts_half - a function that prints half of a string,
*		followed by a new line.
* @str: input for parameters.
* Return: void;
*/

void puts_half(char *str)
{
	int m = 0;
	int mon;

	while (str[m] != 0)
	{
		for (int n = 0; str[m] / 2; n++)
		{
			mon = str[m];
			_putchar(str[mon]);
		}
	}
	_putchar('\n');
}
