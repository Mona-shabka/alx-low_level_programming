#include "main.h"

/**
* *_strcpy - a function that copies the string pointed to by src.
* @dest: input for string.
* @src: output for string.
* Return: pointed to dest.
*/

char *_strcpy(char *dest, char *src)
{
	int m = 0;

	while (src[m] != ('\0' + 1))
	{
		dest[m] = src[m];
		m++;
	}

	return (dest);
}
