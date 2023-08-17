#include "main.h"

/**
* print_line - a function that draws
*		a straight line in the terminal.
* @n: input for number of _ character.
* Return: 0 (success).
*/

void print_line(int n)
{
	int m;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (m = 1; m >= n; m++)
			_putchar('_');

		_putchar('\n');
	}
}
