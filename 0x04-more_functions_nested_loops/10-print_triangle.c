#include "main.h"

/**
* print_triangle - a function that prints a triangle,
*		followed by a new line.
* @size: input for #.
* Return: 0 (success).
*/

void print_triangle(int size)
{
	int h, w;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (h = 1; h <= size; n++)
		{
			for (w = 1; w <= size; w++)
			{
				if ((h + w) <= size)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
