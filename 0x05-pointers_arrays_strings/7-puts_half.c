#include "main.h"

/**
* puts_half - a function that prints half of a string,
*		followed by a new line.
* @str: input for parameters.
* Desription: If the number of characters is odd,
*		prints (length_of_the_string - 1) / 2.
* return: half of input.
*/

void puts_half(char *str)
{
	int m, l, r;

	l = 0;

	for (m = 0; str[m] != '\0'; m++)
	{
		l++;
	}
	r = (l / 2);

	if ((l % 2) == 1)
		r = ((l + 1) / 2);

	for (m = r; str[m] != '\0'; m++)
	{
		_putchar(str[m]);
	}
	_putchar('\n');
}
