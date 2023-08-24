#include "main.h"

/**
 * isLower - afunction that show lowercase ascii.
 * @m: input of letters.
 * Return: 1(true) 0 (false).
*/

int isLower(char m)
{
	return (m >= 97 && m <= 122);
}

/**
 * isDelimiter - a function that show the delimiter ascii.
 * @m: input of letters.
 * Return: 1 (true) and 0 (false).
*/

int isDelimiter(char m)
{
	int i = 0;
	char d[] = " \t\n,.!?\"(){}";

	for (i = 0; i < 12; i++)
		if (m == d[i])
			return (1);
	return (0);
}

/**
* cap_string - a function that capitalizes all words of a string.
* @str: input for string.
* Return: string of capital.
*/

char *cap_string(char *str)
{
	char *p = str;
	int l = 1;

	while (*str)
	{
		if (isDelimiter(*str))
			l = 1;
		else if (isLower(*str) && l)
		{
			*str -= 32;
			l = 0;
		}
		else
			l = 0;
		str++;
	}
	return (p);
}
