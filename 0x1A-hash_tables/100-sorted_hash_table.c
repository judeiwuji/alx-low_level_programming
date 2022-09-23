#include "hash_tables.h"

/**
 * shash_table_create - Creates a sorted hash table
 * @size: The size
 *
 * Return: shash_table_t*
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table;

	table = malloc(sizeof(shash_table_t));
	if (table == NULL)
		return (NULL);
	table->size = size;
	table->shead = NULL;
	table->stail = NULL;
	table->array = malloc(sizeof(shash_node_t *) * size);
	if (table->array == NULL)
		return (NULL);
	return (table);
}

/**
 * shash_table_set - Add data to the hash table
 * @ht: The hashtable
 * @key: The key
 * @value: The value
 *
 * Return: int
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	int found = 0;
	unsigned long int index;
	shash_node_t *new_node, *node;

	if (ht == NULL)
		return (0);
	if (ht->size == 0 || ht->array == NULL)
		return (0);
	if (key == NULL || key[0] == ' ' || strcmp(key, "") == 0)
		return (0);
	if (value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	new_node->snext = NULL;
	new_node->sprev = NULL;
	ht->array[index] = new_node;

	node = ht->shead;
	if (node == NULL)
	{
		ht->shead = new_node;
		ht->stail = new_node;
	}
	else
	{
		while (node != NULL)
		{
			if (strcmp(node->key, key) >= 0)
			{

				if (node->sprev)
				{
					node->sprev->snext = new_node;
					new_node->sprev = node->sprev;
				}
				else
					ht->shead = new_node;
				new_node->snext = node;
				node->sprev = new_node;
				found = 1;
				break;
			}
			node = node->snext;
		}

		if (found == 0)
		{
			node = ht->stail;
			node->snext = new_node;
			new_node->sprev = node;
			ht->stail = new_node;
		}
	}
	return (1);
}

/**
 * shash_table_get - Finds the value of a given key
 * @ht: The hash table
 * @key: The key
 *
 * Return: char* otherwise NULL
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *node = NULL;

	if (ht == NULL || key == NULL)
		return (NULL);

	node = ht->shead;
	while (node != NULL)
	{
		if (node && strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}

/**
 * shash_table_print - Prints hash table
 * @ht: The hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	int start = 0;
	shash_node_t *node;

	if (ht == NULL)
		return;
	printf("{");
	node = ht->shead;
	while (node != NULL)
	{
		if (start == 1)
			printf(", ");
		start = 1;
		printf("'%s': '%s'", node->key, node->value);
		node = node->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Prints hash table in reverse
 * @ht: The hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	int start = 0;
	shash_node_t *node;

	if (ht == NULL)
		return;
	printf("{");
	node = ht->stail;
	while (node != NULL)
	{
		if (start == 1)
			printf(", ");
		start = 1;
		printf("'%s': '%s'", node->key, node->value);
		node = node->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - Deletes a hash table
 * @ht: The hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *node, *temp;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			temp = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = temp;
		}
	}
	free(ht->array);
	free(ht);
}
