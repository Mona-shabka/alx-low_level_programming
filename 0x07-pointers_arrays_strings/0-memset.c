#include "main.h"

/**
* _memset - a function that fills memory with a constant byte.
* @s: string that used.
* @b: letter to change.
* @n: number of bytes to replace.
* Return: string.
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int replace;

	for (replace = 0; n > 0; replace++, n--)
	{
		s[replace] = b;
	}
	return (s);
}
