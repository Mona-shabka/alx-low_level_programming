#include "main.h"

/**
* string_nconcat - a function that concatenates two strings.
* @s1: pointer to string 1.
* @s2: pointer to string 2.
* @n: number of bytes.
* Return: string pointer.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, b, s1_len, s2_len;
	char *string;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (s1_len = 0; s1[s1_len] != '\0'; s1_len++)
		;
	for (s2_len = 0; s2[s2_len] != '\0'; s2_len++)
		;
	string = malloc(s1_len + 1 + n);
	if (string == NULL)
		return (NULL);
	for (a = 0; s1[a] != '\0'; a++)
		string[a] = s1[a];
	for (b = 0; b < n; b++)
	{
		string[a] = s2[b];
		a++;
	}
	string[a] = '\0';
	return (string);
}
