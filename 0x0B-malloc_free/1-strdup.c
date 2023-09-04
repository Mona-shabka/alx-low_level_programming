#include "main.h"

/**
* _strdup - a function that returns a pointer to a newly allocated
*		space in memory, which contains a copy of the string
*		given as a parameter.
* @str: pointer to string.
* Return: null (if string null).
*/

char *_strdup(char *str)
{
	int m = 0, size = 0;
	char *n;

	if (str == NULL)
		return (NULL);

	for (size = 0; str[size] != '\0'; size++)
		;

	n = malloc(size * sizeof(*str) + 1);

	if (n == 0)
		return (NULL);

	else
	{
		for (m = 0; m < size; m++)
			n[m] = str[m];
	}
	return (n);
}
