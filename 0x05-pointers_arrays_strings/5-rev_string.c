#include "main.h"

/**
* rev_string - a function that reverses a string.
* @s: input for string.
* Return: void.
*/

void rev_string(char *s)
{
	int m = 0;
	int n;
	int mon;

	while (s[m] != '\0')
	{
		m++;
	}

	for (n = 0; n < m / 2; n++)
	{
		mon = s[n];
		s[n] = s[m - 1 - n];
		s[m - 1 - n] = mon;
	}
}
