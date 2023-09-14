#include "variadic_functions.h"

/**
* sum_them_all -  a function that returns the sum of all its parameters.
* @n: argument numbers.
* @...: integers enter sum process.
* Return: sum.
*/

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	int m;
	va_list list;

	if (!n)
		return (0);
	va_start(list, n);
	for (; m < n; m--)
		sum += va_arg(list, int);
	va_end(list);
	return (sum);
}
