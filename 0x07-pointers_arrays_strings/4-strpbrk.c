#include "main.h"

/**
* _strpbrk - a function that searches a string for any of a set of bytes.
* @s: string1.
* @accept: string2.
* Return: pointer to the bytes of string s.
*/

char *_strpbrk(char *s, char *accept)
{
	unsigned int replace, replace1;
	char *mon;

	for (replace = 0; s[replace] != '\0'; replace++)
	{
		for (replace1 = 0; accept[replace1] != '\0'; replace1)
		{
			if (accept[replace1] == s[replace])
			{
				mon = &s[replace];
				return (mon);
			}
		}
	}
	return (0);
}
