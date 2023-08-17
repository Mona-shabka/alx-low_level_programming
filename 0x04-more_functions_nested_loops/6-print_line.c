#include "main.h"

/**
* print_line - a function that draws
*		a straight line in the terminal.
* @n: input for line.
* Return: 0 (success).
*/

void print_line(int n)
{
	for (n = 1; n >= 1; n++)
	{
		_putchar(95);

		if (n <= 0)
		{
			_putchar('\n');
		}
		_putchar('\n');
	}
}
