#include "main.h"

/**
* _strncat - a function that concatenates two strings.
* @dest: input for first string.
* @src: input for second string.
* @n: number of bytes from src.
* Return: dest.
*/

char *_strncat(char *dest, char *src, int n)
{
	int string1, string2;

	string1 = 0;

	while (dest[string1])
		string1++;

	for (string2 = 0; string2 < n && src[string2] != '\0'; string2++)
		dest[string1 + string2] = src[string2];

	dest[string1 + string2] = '\0';

	return (dest);
}
