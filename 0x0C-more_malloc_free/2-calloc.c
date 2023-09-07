#include "main.h"

/**
* memoryset - a function that enter memory by constant.
* @str: pointer.
* @a: constant.
* @b: number of bytes that used.
* Return: pointer (point).
*/

char *memoryset(char *str, char a, unsigned int b)
{
	char *point = str;

	while (b--)
	{
		*str++ = a;
	}
	return (point);
}

/**
* _calloc - a function that allocates memory for an array,
*		using malloc.
* @nmemb: array length.
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

	memoryset(m_array, 0, sizeof(char) * nmemb);

	return (m_array);
}
