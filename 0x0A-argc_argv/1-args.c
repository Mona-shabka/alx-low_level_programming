#include <stdio.h>

/**
* main - a program that prints the number of arguments passed into it.
* @argc: number.
* @argv: pointer of argument array.
* Return: 0 (success), if not fail.
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

