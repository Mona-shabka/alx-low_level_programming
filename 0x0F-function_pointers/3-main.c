#include "3-calc.h"

/**
* main - a program that prints the number of arguments passed into it.
* @argc: argument number.
* @argv: pointer of argument array.
* Return: 0.
*/

int main(int argc, char **argv)
{
	int x, y;
	int (*func)(int, int);

	x = atoi(argv[1]);
	y = atoi(argv[3]);

	if (argc != 4)
		printf("Error\n"), exit(98);

	func = get_op_func(argv[2]);
	if (!func)
		printf("Error\n"), exit(99);

	if (!y && (argv[2][0] == '/' || argv[2][0] == '%'))
		printf("Error\n"), exit(100);

	printf("%d\n", func(x, y));
	return (0);
}
