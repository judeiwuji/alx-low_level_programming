#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: The head of the list
 * @idx: The index where the node will be inserted
 * @n: The data
 *
 * Return: (pointer) to the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = NULL;
	listint_t *node;
	listint_t *prev = NULL;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	node = *head;
	for (i = 0; node != NULL; i++)
	{
		if (i == idx)
		{
			new_node = malloc(sizeof(listint_t));
			if (new_node != NULL)
			{
				new_node->n = n;
				new_node->next = node;
				if (prev != NULL)
					prev->next = new_node;
				else
					*head = new_node;
			}
			break;
		}
		prev = node;
		node = node->next;
	}

	return (new_node);
}
