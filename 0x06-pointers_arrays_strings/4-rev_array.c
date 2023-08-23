#include "main.h"

/**
* reverse_array - a function that reverses the content of
*			an array of integers.
* @a: array.
* @n: the number of elements of the array.
* Return: void.
*/

void reverse_array(int *a, int n)
{
	int m, o, s;

	for (m = 0, o = (n - 1); m < o; m++, o--)
	{
		s = a[m];
		a[m] = a[o];
		a[o] = s;
	}
}
