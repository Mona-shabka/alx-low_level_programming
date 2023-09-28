#include "main.h"

/**
 * print_binary - a function that prints the binary representation
 *			of a number.
 * @n: printed number.
 * Return: void.
 */

void print_binary(unsigned long int n)
{
	int m_bit = sizeof(n) * 8;
	int o = 0;

	while (m_bit)
	{
		if (n & 1L << --m_bit)
		{
			_putchar('1');
			o++;
		}
		else if (o)
			_putchar('0');
	}
	if (!o)
		_putchar('0');
}
