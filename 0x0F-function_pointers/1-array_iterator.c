#include "function_pointers.h"

/**
* array_iterator - a function that executes a function given as
*		a parameter on each element of an array.
* @array: given array.
* @size: size of array.
* @action: pointer to function action.
* Return: void.
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *length;

	*length = &array + size - 1;

	if (array && size && action)
	{
		for (length = 0; array <= length; length++)
			action(*array++);
	}
}
