#include "main.h"

/**
* _memcpy - a function that copies memory area.
* @dest: replaced string.
* @src: string.
* @n: number of replaced bytes.
* Return: dest.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int replace;

	for (replace = 0; replace < n; replace++)
	{
		dest[replace] = src[replace];
	}
	return (dest);
}
