#include "function_pointers.h"

/**
* int_index - a function that searches for an integer.
* @array: given array.
* @size: size of array.
* @cmp: pointer to function.
* Return: numbers.
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int length;

	if (size <= 0 || !array || !cmp)
		return (-1);
	for (length = 0; length < size; length++)
	{
		if (cmp(array[length]))
			return (length);
	}
}
