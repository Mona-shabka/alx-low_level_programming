#include "main.h"

/**
* *_strcpy - a function that copies the string pointed to by src.
* @dest: input for string.
* @src: output for string.
* Return: pointed to dest.
*/

char *_strcpy(char *dest, char *src)
{
	int m = -1;

	do {
		m++;
		dest[m] = src[m];
	} while (src[m] != '\0');

	return (dest);
}
