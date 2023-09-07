#include "main.h"

/**
* _realloc - a function that reallocates a memory block
*		using malloc and free.
* @ptr: string pointer.
* @old_size: old size of array.
* @new_size: new size of array.
* Return: (ptr) is not null and null if newsize equal zero.
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *m;
	unsigned int n;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		m = malloc(new_size);
		if (m == NULL)
			return (NULL);
		return (m);
	}
	if (new_size > old_size)
	{
		m = malloc(new_size);
		if (m == NULL)
			return (NULL);
		for (n = 0; n < old_size && n < new_size; n++)
			*((char *)m + n) = *((char *)ptr + n);
		free(ptr);
	}
	return (m);
}
