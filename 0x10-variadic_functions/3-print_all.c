#include "variadic_functions.h"

/**
* format_char - a program that check the format of character.
* @separator: separator is the string to be printed between the strings.
* @listt: pointer of argument.
* Return: void
*/

void format_char(char *separator, va_list listt)
{
	printf("%s%c", separator, va_arg(listt, int));
}

/**
* format_int - a program that check the format of integers numbers.
* @separator: separator is the string to be printed between the strings.
* @listt: pointer of argument.
* Return: void
*/

void format_int(char *separator, va_list listt)
{
	printf("%s%d", separator, va_arg(listt, int));
}

/**
* format_float - a program that check the format of float numbers.
* @separator: separator is the string to be printed between the strings.
* @listt: pointer of argument.
* Return: void
*/

void format_float(char *separator, va_list listt)
{
	printf("%s%f", separator, va_arg(listt, double));
}

/**
* format_string - a program that check the format of strings.
* @separator: separator is the string to be printed between the strings.
* @listt: pointer of argument.
* Return: void
*/

void format_string(char *separator, va_list listt)
{
	char *string = va_arg(listt, char *);

	printf("%s%s", separator, string ? string : "(nil)");
}

/**
* print_all -  a function that prints anything.
* @format: format of string.
* Return: void.
*/

void print_all(const char * const format, ...)
{
	int x = 0, y;
	char *separator = "";
	va_list listt;
	list_l tokens[] = {
		{"c", format_char},
		{"i", format_int},
		{"f", format_float},
		{"s", format_string},
		{NULL, NULL}
	};
	va_start(listt, format);
	while (format && format[x])
	{
		y = 0;
		while (tokens[y].chara)
		{
			if (format[x] == tokens[y].chara[0])
			{
				tokens[y].fun(separator, listt);
				separator = ", ";
			}
			y++;
		}
		x++;
	}
	printf("\n");
	va_end(listt);
}
