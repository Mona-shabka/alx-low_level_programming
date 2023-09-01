#include <stdio.h>
#include <stdlib.h>

/**
* main - a program that multiplies two numbers.
* @argc: number.
* @argv: pointer of argument array.
* Return: 0 (success), if not fail.
*/

int main(int argc, char *argv[])
{
	int result;

	if (argc == 3)
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
