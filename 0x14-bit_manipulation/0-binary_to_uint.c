#include "main.h"

/**
 * binary_to_uint - a function that converts a binary number to
 *			an unsigned int.
 * @b: pointing to a string of 0 and 1 chars.
 * Return: integer number.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int m = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		m = m * 2 + (*b++ - '0');
	}
	return (m);
}
