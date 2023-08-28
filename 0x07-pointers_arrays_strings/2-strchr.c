#include "main.h"

/**
* _strchr - a function that locates a character in a string.
* @s: string.
* @c: place of letter that want to search about it.
* Return: place of s.
*/

char *_strchr(char *s, char c)
{
	unsigned int replace;

	for (replace = 0; s[replace] >= '\0'; replace++)
	{
		if (s[replace] == c)
			return (s + replace);
	}
	return ('\0');
}
