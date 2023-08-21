#include "main.h"

/**
* puts_half - a function that prints half of a string,
*		followed by a new line.
* @str: input for parameters.
* Desription: If the number of characters is odd,
*		prints (length_of_the_string - 1) / 2.
*/

void puts_half(char *str)
{
	for (int m = 0; str[m] != '\0'; m++)
	{
		;
	}
	m++;

	for (m / 2 = 0; str[m] != '\0'; m++)
	{
		_putchar(str[m]);
	}
	_putchar('\n');
}
