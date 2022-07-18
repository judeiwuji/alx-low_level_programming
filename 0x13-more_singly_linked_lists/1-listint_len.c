#include "lists.h"

/**
 * listint_len - a function that returns the number of elements
 * in a linked listint_t list.
 * @h: the head of the list
 *
 * Return: (int) length of list
 */
size_t listint_len(const listint_t *h)
{
	listint_t *node;
	size_t len = 0;

	if (h != NULL)
	{
		node = h->next;
		len++;

		while (node != NULL)
		{
			node = node->next;
			len++;
		}
	}

	return (len);
}
