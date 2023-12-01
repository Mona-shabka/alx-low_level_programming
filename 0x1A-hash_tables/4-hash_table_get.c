#include "hash_tables.h"

/**
 * hash_table_get - a function that retrieves a value associated with a key.
 * @ht: hash table pointer.
 * @key: The value of key.
 * Return: key value or NULL.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *m_node;
	unsigned long int m_index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	m_index = key_index((const unsigned char *)key, ht->size);
	if (m_index >= ht->size)
		return (NULL);
	m_node = ht->array[m_index];
	while (m_node && strcmp(m_node->key, key) != 0)
		m_node = m_node->next;
	return ((m_node == NULL) ? NULL : m_node->value);
}
