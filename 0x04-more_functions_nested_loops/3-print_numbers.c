#include "main.h"

/**
* print_numbers - a function that prints the numbers,
*			from 0 to 9,
*			followed by a new line.
* Description: print numbers 0 to 9.
* Return: void.
*/

void print_numbers(void)
{
	int n = 0;

	if (n >= 0 && n <= 9)
	{
		_putchar(n + 48);

		n++;
	}
	_putchar('\n');

}
