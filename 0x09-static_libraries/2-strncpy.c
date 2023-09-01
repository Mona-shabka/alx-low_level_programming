#include "main.h"

/**
* _strncpy - a function that copies a string.
* @dest: input for first string.
* @src: input for second string.
* @n: number of bytes from src.
* Return: dest.
*/

char *_strncpy(char *dest, char *src, int n)
{
	int string;

	for (string = 0; string < n && src[string] != '\0'; string++)
		dest[string] = src[string];

	while (string < n)
	{
		dest[string] = '\0';
		string++;
	}

	return (dest);
}
