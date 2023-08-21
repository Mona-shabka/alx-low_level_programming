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
	int l = 0;

	for (int m = 0; str[m] != '\0'; m++)
	{
		l++;
	}
	int r = (l / 2);

	if ((l % 2) == 1)
		r = ((l + 1) / 2);

	for (m = r; str[m] != '\0'; m++)
	{
		_putchar(str[m]);
	}
	_putchar('\n');
}
