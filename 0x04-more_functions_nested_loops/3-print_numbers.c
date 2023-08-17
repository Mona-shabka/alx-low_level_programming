#include "main.h"

/**
* print_numbers - a function that prints the numbers,
*			from 0 to 9, followed by a new line.
*
* Return: Always 0 (success).
*/

void print_numbers(void)
{
	int c = 0;

	if (c >= 0 && c <= 9)
	{
		_putchar(c + 48);
		c++;
	}
	_putchar('\n');

	return (0);
}
