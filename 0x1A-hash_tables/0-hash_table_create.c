#include "hash_tables.h"

/**
 * hash_table_create - A function that creates a hash table.
 * @size: array size.
 * Return: new hash table pointer.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table_created;
	unsigned long int m;

	hash_table_created = malloc(sizeof(hash_table_t));
	if (hash_table_created == NULL)
		return (NULL);
	hash_table_created->size = size;
	hash_table_created->array = malloc(sizeof(hash_node_t *) * size);
	if (hash_table_created->array == NULL)
		return (NULL);
	for (m = 0; m < size; m++)
	{
		hash_table_created->array[m] = NULL;
	}
	return (hash_table_created);
}
