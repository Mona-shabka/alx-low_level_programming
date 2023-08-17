#include "main.h"

/**
* print_square - a function that draws
*		a square in the terminal.
* @size: input for number of # character.
*/

void print_square(int size)
{
	int n, s;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (n = 1; n <= size; n++)
		{
			_putchar('#');
			for (s = 2; s <= size; s++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
