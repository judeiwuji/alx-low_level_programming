#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: The hash table
 * @key: The key
 * @value: The value
 *
 * Return: int
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *node;

	if (!ht || !key)
		return (0);
	if (ht->size == 0 || ht->array == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;
	node = ht->array[index];
	if (node)
	{
		new_node->next = node;
		while (node != NULL)
		{
			free(node->value);
			node->value = strdup(value);
			node = node->next;
		}
	}
	ht->array[index] = new_node;
	return (1);
}
