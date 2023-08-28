#include "main.h"

/**
* print_chessboard - a function that prints the chessboard.
* @a: array.
* Return: nothing.
*/

void print_chessboard(char (*a)[8])
{
	int m, n;

	for (m = 0; m < 8; m++)
	{
		for (n = 0; n < 8; n++)
		{
			_putchar(a[m][n]);
		}
		_putchar('\n');
	}
}
