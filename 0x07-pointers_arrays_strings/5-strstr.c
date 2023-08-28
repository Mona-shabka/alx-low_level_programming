#include "main.h"

/**
* _strstr - a function that locates a substring.
* @haystack: string1.
* @needle: string2.
* Return: Always 0 (success).
*/

char *_strstr(char *haystack, char *needle)
{

	for (; *haystack != '\0'; haystack++)
	{
		char *mo = haystack;
		char *mon = needle;

		while (*mo == *mon && *mon != '\0')
		{
			mo++;
			mon++;
		}

		if (*mon == '\0')
			return (haystack);
	}
	return (NULL);
}
