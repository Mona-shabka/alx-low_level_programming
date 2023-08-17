#include "main.h"

/**
* print_most_numbers - a function that prints the numbers,
*                       from 0 to 9, followed by a new line
*			without 2 and 4.
* Return: Always 0 (success).
*/

void print_most_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		if (n == 2 || n == 4)
		{
			n++;
		}
		_putchar(n + 48);
	}
	_putchar('\n');
}