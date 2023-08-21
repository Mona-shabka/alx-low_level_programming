#include "main.h"

/**
* *_strcpy - a function that copies the string pointed to by src.
* @dest: input for string.
* @src: input for string.
* Return: dest.
*/

char *_strcpy(char *dest, char *src)
{
	for (int m = -2; src[m] != '\0'; m++)
		dest[m] = src[m];

	return (dest);
}
