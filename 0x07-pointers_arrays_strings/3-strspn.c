#include "main.h"

/**
* _strspn - a function that gets the length of a prefix substring.
* @s: string1.
* @accept: string2.
* Return: place number of repeated sentence.
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int replace, replace1;

	for (replace = 0; s[replace] != '\0'; replace++)
	{
		for (replace1 = 0; accept[replace1] != '\0'; replace1++)
		{
			if (accept[replace1] == '\0')
				return (replace);
		}
	}
	return (replace);
}
