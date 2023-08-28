#include "main.h"

/**
* print_diagsums -  a function that prints the sum of the
*		two diagonals of a square matrix of integers.
* @a: array.
* @size: array size.
* Return: nothing.
*/

void print_diagsums(int *a, int size)
{
	int replace, r1 = 0, r2 = 0;

	for (replace = 0; replace < size; replace++)
	{
		r1 += a[replace];
		r2 += a[size - replace - 1];
		a += size;
	}
	printf("%d, ", r1);
	printf("%d\n", r2);
}
