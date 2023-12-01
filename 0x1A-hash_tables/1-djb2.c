#include "hash_tables.h"

/**
 * hash_djb2 - Hash function implementing the djb2 algorithm.
 * @str: hash string.
 * Return: Value of hash.
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int m_hash;
	int m_count;

	m_hash = 5381;
	while ((m_count = *str++))
		m_hash = ((m_hash << 5) + m_hash) + m_count;
	return (m_hash);
}
