#include "main.h"

/**
* memoryset - a function that enter memory by constant.
* @s: pointer.
* @a: constant.
* @b: number of bytes that used.
* Return: pointer (point).
*/

char *memoryset(char *s, char a, unsigned int b)
{
	char *point = s;

	while (b--)
	{
		*s++ = a;
	}
	return (point);
}

/**
* _calloc - a function that allocates memory for an array, using malloc.
* @nmemb: array.
* @size: size element.
* Return: pointer.
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m_array;

	if (size == 0 || nmemb == 0)
		return (NULL);
	m_array = malloc(sizeof(int) * nmemb);

	if (m_array == 0)
		return (NULL);

	memoryset(m_array, 0, sizeof(int) * nmemb);

	return (m_array);
}
