#include "main.h"

/**
* _strcat - a function that concatenates two strings.
* @dest: input for first string.
* @src: input for second string.
* Return: dest.
*/

char *_strcat(char *dest, char *src)
{
	int string1, string2;

	string1 = 0;

	while (dest[string1])
		string1++;

	for (string2 = 0; src[string2]; string2++)
		dest[string1++] = src[string2];

	return (dest);
}
