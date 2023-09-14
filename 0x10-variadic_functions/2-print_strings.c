#include "variadic_functions.h"

/**
* print_strings -  a function that prints numbers, followed by a new line
* @separator: separator is the string to be printed between numbers.
* @n: the number of integers passed to the function.
* @...: the string that enter to print process.
* Return: void.
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	int m = n;
	va_list list;
	char *string;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(list, n);
	while (m--)
		printf("%s%s", (string = va_arg(list, char *)) ? string : "(nil)",
			m ? (separator ? separator : "") : "\n");
	va_end(list);
}
