#include <stdio.h>

/**
* main - a program that prints all arguments it receives.
* @argc: number.
* @argv: pointer of argument array.
* Return: 0 (success).
*/

int main(int argc, char const *argv[])
{
	int m = 0;

	while (argc--)
	{
		printf("%s\n", argv[m]);
		m++;
	}

	return (0);
}
