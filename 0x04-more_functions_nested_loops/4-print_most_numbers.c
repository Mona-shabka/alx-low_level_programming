#include "main.h"

/**
* print_most_numbers - a function that prints the numbers,
*                       from 0 to 9, followed by a new line
*			without 2 and 4.
* Return: Always 0 (success).
*/

void print_most_numbers(void)
{
	int c;

	if (c >= 48 && c <= 57 && c != 50 && c != 52)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');

	return (0);
}
