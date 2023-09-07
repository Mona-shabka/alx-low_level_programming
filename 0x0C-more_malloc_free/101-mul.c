#include "main.h"

/**
* _isdigit - a function that checks for numbers in string.
* @m: input for string.
* Return: 0 (non-digit) 1 (number).
*/

int _isdigit(char *m)
{
	int n = 0;

	while (m[n])
	{
		if (m[n] < '0' || m[n] > '9')
			return (0);
		n++;
	}
	return (1);
}

/**
* _strlen - a function that calculate the length of string.
* @m: input string.
* Return: int number of string length.
*/

int _strlen(char *m)
{
	int n = 0;

	while (m[n] != '\0')
	{
		n++;
	}
	return (n);
}

/**
 * _error - a function that check the error of string.
 */

void _error(void)
{
	printf("Error\n");
	exit(98);
}

/**
* main - a function that that multiplies two positive numbers.
* @argc:argument numbers.
* @argv: argument string.
* Return: 0 means success.
*/

int main(int argc, char *argv[])
{
	char *m1, *m2;
	int length1, length2, length, i, carry, num1, num2, *result, a = 0;
	m1 = argv[1];
	m2 = argv[2];
	if (argc != 3 || !_isdigit(m1) || !_isdigit(m2))
		_error();
	length1 = _strlen(m1);
	length2 = _strlen(m2);
	length = length1 + length2 + 1;
	result = malloc(sizeof(int) * length);
	if (!result)
		return (1);
	for (i = 0; i <= length1 + length2; i++)
		result[i] = 0;
	for (length1 = length1 - 1; length1 >= 0; length1--)
	{
		num1 = m1[length1] - '0';
		carry = 0;
		for (length2 = _strlen(m2) - 1; length2 >= 0; length2--)
		{
			num2 = m2[length2] - '0';
			carry += result[length1 + length2 + 1] + (num1 * num2);
			result[length1 + length2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[length1 + length2 + 1] += carry;
	}
	for (i = 0; i < length - 1; i++)
	{
		if (result[i])
			a = 1;
		if (a)
			_putchar(result[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
