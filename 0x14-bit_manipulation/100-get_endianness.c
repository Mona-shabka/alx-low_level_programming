#include "main.h"

/**
 * get_endianness - a function that checks the endianness.
 * Return: 1 (small endian) or 0 (big endian).
 */

int get_endianness(void)
{
	unsigned long int m = 1;

	return (*(char *)&m);
}
