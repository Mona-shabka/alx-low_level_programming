#include "main.h"

/**
* _puts - a function that print string.
* @m: string pointer.
* Return: void.
*/

void _puts(char *m)
{
	int n = 0;

	while (m[n])
	{
		_putchar(m[n]);
		n++;
	}
}

/**
* _atoi - a function that change charachter to number.
* @mon: string.
* Return: numbers.
*/

int _atoi(const char *mon)
{
	int sign = 1;
	unsigned long int r = 0, num, n;

	for (num = 0; !(mon[num] >= 48 && mon[num] <= 57); num++)
	{
		if (mon[num] == '-')
		{
			sign *= -1;
		}
	}
	for (n = num; mon[n] >= 48 && mon[n] <= 57; n++)
	{
		r *= 10;
		r += (mon[n] - 48);
	}
	return (sign * r);
}
/**
* main - a program that multiplies two positive numbers.
* @argc: number of arguments.
* @argv: array.
* Return: 0.
*/

int main(int argc, char const *argv[])
{
	(void)argc;

	if (argc != 3)
	{
		_puts("Error ");
		exit(98);
	}
	print_int(_atoi(argv[1]) * _atoi(argv[2]));
	_putchar('\n');

	return (0);
}
