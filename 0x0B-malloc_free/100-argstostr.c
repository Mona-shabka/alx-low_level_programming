#include "main.h"

/**
 * _strlen - a function that calculate the length of string.
 * @m: string.
 * Return: number.
*/

int _strlen(char *m)
{
	int size;

	for (size = 0; m[size] != '\0'; size++)
		;

	return (size);
}

/**
* argstostr - a function that concatenates all the arguments
*		of your program.
* @ac: input for integer.
* @av: arguments.
* Return: characters.
*/

char *argstostr(int ac, char **av)
{
	int m = 0, mc = 0, n = 0, cal = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (m = 0; m < ac; m++, mc++)
		mc += _strlen(av[m]);

	s = malloc(sizeof(char) * mc + 1);
	if (s == 0)
		return (NULL);

	for (m = 0; m < ac; m++)
	{
		for (n = 0; av[m][n] != '\0'; n++, cal++)
			s[cal] = av[m][n];

		s[cal] = '\n';
		cal++;
	}
	s[cal] = '\0';
	return (s);
}
