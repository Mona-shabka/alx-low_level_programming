#include "./hash_tables.h"

/**
 * hash_table_print - a function that prints a hash table.
 * @ht: hash table pointer to print.
 * Return: void.
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *m_node;
	unsigned long int m;
	unsigned char m_comma_flag = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (m = 0; m < ht->size; m++)
	{
		if (ht->array[m] != NULL)
		{
			if (m_comma_flag == 1)
				printf(", ");
			m_node = ht->array[m];
			while (m_node != NULL)
			{
				printf("'%s': '%s'", m_node->key, m_node->value);
				m_node = m_node->next;
				if (m_node != NULL)
					printf(", ");
			}
			m_comma_flag = 1;
		}
	}
	printf("}\n");
}
