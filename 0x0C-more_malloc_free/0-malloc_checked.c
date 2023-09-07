#include "main.h"

/**
* malloc_checked - a function that allocates memory using malloc.
* @b: input for integer number.
* Return: NULL or pointer.
*/

void *malloc_checked(unsigned int b)
{
	int *c = malloc(b);

	if (c == NULL)
		exit(98);
	return (c);
}
