#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: The head of the list
 * @idx: The idx to insert the new node
 * @n: The node data
 *
 * Return: The address of the new node, NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new_node = NULL;
	dlistint_t *node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	if (*h == NULL)
	{
		*h = new_node;
		return (new_node);
	}
	node = *h;
	while (node != NULL)
	{
		if (i == idx)
		{
			new_node->next = node;
			new_node->prev = node->prev;
			if (node->prev != NULL)
				node->prev->next = new_node;
			node->prev = new_node;
			return (new_node);
		}
		i++;
		node = node->next;
	}
	return (NULL);
}
