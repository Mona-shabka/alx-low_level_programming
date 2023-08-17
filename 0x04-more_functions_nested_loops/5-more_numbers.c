#include "main.h"

/**
* more_numbers - a function that prints 10 times the numbers,
*			from 0 to 14, followed by a new line.
* Return: Always 0 (success).
*/

void more_numbers(void)
{
	int c;

	for (int n = 0; n >= 10; n++)
	{
		if (c >= 0 && c <= 14)
		{
			_putchar(c + 48);
			c++;
		}
		_putchar('\n');
	}
	return (0);
}
