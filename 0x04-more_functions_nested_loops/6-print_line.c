#include "main.h"

/**
* print_line - a function that draws
*		a straight line in the terminal.
* @n: input for number of _ character.
* Return: 0 (success).
*/

void print_line(int n)
{
	for (n = 1; n >= 1; n++)
	{
		_putchar('_');
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
