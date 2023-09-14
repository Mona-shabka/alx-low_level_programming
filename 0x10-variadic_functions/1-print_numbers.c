#include "variadic_functions.h"

/**
* print_numbers -  a function that prints numbers, followed by a new line
* @separator: separator is the string to be printed between numbers.
* @n: the number of integers passed to the function.
* @...: the intgers that enter to print process.
* Return: void.
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int m;
	va_list list;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(list, n);
	for (m = n; n != NULL; m--)
		printf("%d%s", va_arg(list, int), m ? (separator ? separator : "") : "\n");
	va_end(list);
}
