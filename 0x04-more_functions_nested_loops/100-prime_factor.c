#include <stdio.h>

/**
 * _sqrt - find the square root
 *
 * @x: input number
 *
 * Return: square root of x.
*/

double _sqrt(double x)
{
	float m, n;

	m = x / 2;
	n = 0;

	while (m != n)
	{
		n = m;
		m = (x / n + n) / 2;
	}
	return (m);
}

/**
 * largest_prime_factor - finds and prints the largest
 *			prime factor of number (num)
 *
 * @num: number of find.
*/

void largest_prime_factor(long int num)
{
	int s, r;

	while (num % 2 == 0)
		num = num / 2;
	for (s = 3; s <= _sqrt(num); s += 2)
	{
		while (num % s == 0)
		{
			num = num / s;
			r = s;
		}
	}

	if (num > 2)
		r = num;
	printf("%d\n", r);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	largest_prime_factor(612852475143);

	return (0);
}
