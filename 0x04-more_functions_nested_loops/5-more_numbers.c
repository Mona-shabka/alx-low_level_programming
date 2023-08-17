#include "main.h"

/**
* more_numbers - a function that prints 10 times the numbers,
*			from 0 to 14, followed by a new line.
* Return: Always 0 (success).
*/

void more_numbers(void)
{
	for (int n = 1; n <= 10; n++)
	{
		for (int c = 0; c <= 14; c++)
		{
			_putchar(c + 48);
			if (c > 9)
			{
				c1 = c % 10;
				_putchar(49 + c1);
			}
		}
		_putchar('\n');
	}
}
