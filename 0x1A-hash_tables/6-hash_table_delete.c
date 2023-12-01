#include "hash_tables.h"

/**
 * hash_table_delete - a function that deletes a hash table.
 * @ht: hash table pointer.
 * Return: void.
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *m_head = ht;
	hash_node_t *m_node, *m_tmp;
	unsigned long int m;

	for (m = 0; m < ht->size; m++)
	{
		if (ht->array[m] != NULL)
		{
			m_node = ht->array[m];
			while (m_node != NULL)
			{
				m_tmp = m_node->next;
				free(m_node->key);
				free(m_node->value);
				free(m_node);
				m_node = m_tmp;
			}
		}
	}
	free(m_head->array);
	free(m_head);
}
