#include "main.h"

/**
* wrdcnt - a function that calculate number of words in string.
* @s: input for string.
* Return: number of words in string.
*/

int wrdcnt(char *s)
{
	int m, n = 0;

	for (m = 0; s[m]; m++)
	{
		if (s[m] == ' ')
		{
			if (s[m + 1] != ' ' && s[m + 1] != '\0')
				n++;
		}
		else if (m == 0)
			n++;
	}
	n++;
	return (n);
}

/**
* strtow - a function that splits a string into words.
* @str: string.
* Return: string pointer.
*/

char **strtow(char *str)
{
	int i, j, k, l, n = 0, nc = 0;
	char **e;

	if (str == NULL || *str == '\0')
		return (NULL);
	n = wrdcnt(str);
	if (n == 1)
		return (NULL);
	e = (char **)malloc(n * sizeof(char *));
	if (e == NULL)
		return (NULL);
	e[n - 1] = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
				;
			j++;
			e[nc] = (char *)malloc(j * sizeof(char));
			j--;
			if (e[nc] == NULL)
			{
				for (k = 0; k < nc; k++)
					free(e[k]);
				free(e[n - 1]);
				free(e);
				return (NULL);
			}
			for (l = 0; l < j; l++)
				e[nc][l] = str[i + l];
			e[nc][l] = '\0';
			nc++;
			i += j;
		}
		else
			i++;
	}
	return (e);
}
