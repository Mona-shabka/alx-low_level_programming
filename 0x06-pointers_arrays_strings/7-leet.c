#include "main.h"

/**
* leet - a function that encodes a string into 1337.
* @c: input for string.
* Return: string with numbers.
*/

char *leet(char *c)
{
	char *m = c;
	char n[] = {'A', 'E', 'O', 'T', 'L'};
	int o[] = {4, 3, 0, 7, 1};
	unsigned int e;

	while (*c)
	{
		for (e = 0; e < sizeof(n) / sizeof(char); e++)
		{
			if (*c == n[e] || *c == n[e] + 32)
			{
				*c = 48 + o[e];
			}
		}
		c++;
	}
	return (m);
}
