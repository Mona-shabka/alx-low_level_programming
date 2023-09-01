#include <stdio.h>
#include <stdlib.h>

/**
* main - a program that adds positive numbers.
* @argc: number.
* @argv: pointer of argument array.
* Return: 0 (success), if not fail.
*/

int main(int argc, char *argv[])
{
	int result;
	char *m;

	while (--argc)
	{
		for (m = argv[argc]; *m; m++)
			if (*m < '0' || *m > '9')
				return (printf("Error\n"), 1);
		result += atoi(argv[argc]);
	}
	printf("%d\n", result);
	return (0);
}
