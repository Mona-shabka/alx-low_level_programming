#include "main.h"

/**
* print_diagonal - a function that draws
*               a diagonal line in the terminal.
* @n: input for number of \ character.
*/

void print_diagonal(int n)
{
	int m, c;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (c = 1; c <= n; c++)
		{
			for (m = 1; m <= c; m++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
	}
}
