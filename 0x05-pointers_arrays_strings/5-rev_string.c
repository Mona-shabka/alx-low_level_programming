#include "main.h"

/**
* rev_string - a function that reverses a string.
* @s: input for string.
* Return: void.
*/

void rev_string(char *s)
{
	int m = 0;

	while (s[m] != '\0')
	{
		m++;
	}

	while (m--)
	{
		_putchar(s[m]);
	}
	_putchar('\n');
}
