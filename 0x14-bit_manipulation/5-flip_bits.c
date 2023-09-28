#include "main.h"

/**
 * flip_bits -  a function that returns the number of bits you would need
 *		to flip to get from one number to another.
 * @n: 1st number.
 * @m: 2nd number.
 * Return: flip number og bites.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int m_xor = n ^ m;
	unsigned int counter = 0;

	while (m_xor)
	{
		if (m_xor & 1ul)
			counter++;
		m_xor = m_xor >> 1;
	}
	return (counter);
}
