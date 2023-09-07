#include "main.h"

/**
* *_memset - a function that enter memory by constant.
* @str: pointer.
* @a: constant.
* @b: number of bytes that used.
* Return: pointer (str).
*/

char *_memset(char *str, char a, unsigned int b)
{
	char *point = str;

	while (b--)
		*str++ = a;

	return (point);
}

/**
* *_calloc - a function that allocates memory for an array, using malloc.
* @nmemb: array.
* @size: size element.
* Return: void.
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m_array;

	if (size == 0 || nmemb == 0)
		return (NULL);
	m_array = malloc(nmemb * sizeof(int));

	if (m_array == 0)
		return (NULL);

	_memset(m_array, 0, sizeof(int) * nmemb);
	return (m_array);
}
