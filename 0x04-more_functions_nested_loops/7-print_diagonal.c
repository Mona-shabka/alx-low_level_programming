#include "main.h"

/**
* print_diagonal - a function that draws
*               a diagonal line in the terminal.
* @n: input for number of \ character.
*/

void print_diagonal(int n)
{
	int m;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (m = 1; m <= n; m++)
			_putchar(92);

		_putchar('\n');
	}
}
