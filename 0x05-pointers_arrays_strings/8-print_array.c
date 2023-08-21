#include "main.h"

/**
* print_array - a function that checks for uppercase character.
* @a: input for numbers,
* @n: input for number of elements of the array.
* Return: void.
*/

void print_array(int *a, int n)
{
	int m;

	for (m = 0; m < n; m++)
	{
		if (m != (n - 1))
			printf("%d, ", a[m]);
		else
			printf("%d", a[m]);
	}
	printf("\n");
}
