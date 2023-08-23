#include "main.h"

/**
* rot13 - a function that encodes a string using rot13.
* @c: input for string.
* Return: string.
*/

char *rot13(char *c)
{
	int m;
	char n[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char o[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *mon = c;

	while (*c)
	{
		for (m = 0; m <= 52; m++)
		{
			if (*c == n[m])
			{
				*c = o[m];
				break;
			}
		}
		c++;
	}
	return (mon);
}
