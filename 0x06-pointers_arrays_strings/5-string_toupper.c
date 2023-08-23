#include "main.h"

/**
* string_toupper - a function that changes all lowercase letters
*			of a string to uppercase.
* @str: input for string.
* Return: string.
*/

char *string_toupper(char *str)
{
	int m;

	for (m = 0; str[m] != '\0'; m++)
	{
		if (str[m] >= 97 && str[m] <= 122)
		{
			str[m] = str[m] - 32;
		}
	}
	return (str);
}
