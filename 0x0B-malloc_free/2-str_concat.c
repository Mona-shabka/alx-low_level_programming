#include "main.h"

/**
 * _strlen - a function that calculate the length of string.
 * @m: string.
 * Return: number.
*/

int _strlen(char *m)
{
	int size;

	for (size = 0; m[size] != '\0'; size++)
		;

	return (size);
}


/**
* str_concat - a function that concatenates two strings.
* @s1: string1.
* @s2: string2.
* Return: null (failed).
*/

char *str_concat(char *s1, char *s2)
{
	int size1, size2, m;
	char *n;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	size1 = _strlen(s1);
	size2 = _strlen(s2);
	n = malloc((size1 + size2) * sizeof(char) + 1);
		if (n == 0)
			return (0);

	for (m = 0; m <= size1 + size2; m++)
	{
		if (m < size1)
			n[m] = s1[m];
		else
			n[m] = s2[m - size1];
	}
	n[m] = '\0';
	return (n);
}
