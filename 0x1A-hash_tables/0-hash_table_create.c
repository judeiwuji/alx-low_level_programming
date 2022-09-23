#include "hash_tables.h"

/**
 * hash_table_create - Creates a hashtable
 * @size: The size of the hashtable
 *
 * Return: pointer
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t table = {0, NULL};
	hash_table_t *table_ptr = &table;

	table.size = size;
	table.array = malloc(sizeof(hash_node_t *) * size);

	if (table.array == NULL)
		return (NULL);
	return (table_ptr);
}
