#include "main.h"

/**
* is_prime_number -  a function that returns 1 if the input integer
*		is a prime number, otherwise return 0.
* @n: number.
* @mm: input number.
* Return: 1 or 0.
*/

int check_prime(int n, int mm);
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
* check_prime - a function to check if number can divide or not.
* @n: input number.
* @mm: input number.
* Return: number.
*/

int check_prime(int n, int mm)
{
	if (mm >= n && n > 1)
		return (1);
	else if (n % mm == 0 || n <= 1)
		return (0);
	else
		return (check_prime(n, mm + 1));
}
