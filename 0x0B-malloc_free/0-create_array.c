#include "main.h"

/**
* create_array -  a function that creates an array of chars,
*			and initializes it with a specific char.
* @size: size of array.
* @c: string of characters.
* Return: null if size zero or fails.
*/

char *create_array(unsigned int size, char c)
{
	char *m = malloc(size);

	if (size == 0 || m == 0)
		return (0);

	while (size--)
		m[size] = c;

	return (m);
}
