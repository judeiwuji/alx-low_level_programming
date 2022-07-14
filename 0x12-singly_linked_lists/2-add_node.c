#include "lists.h"

/**
 * add_node - a function that adds a new node at the beginning of
 * a list_t list.
 * @head: The linked list head
 * @str: The string data of the list
 *
 * Return: pointer to the node added
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	list_t *ptr;
	int strLen;

	if (new != NULL)
	{
		strLen = _strlen(str);
		new->str = malloc(strLen + 1);
		new->str = strdup(str);
		new->len = strLen;
		new->next = NULL;

		if (*head == NULL)
			*head = new;
		else
		{
			ptr = *head;
			while (ptr->next != NULL)
				ptr = ptr->next;
			ptr->next = new;
		}
	}

	return (new);
}

/**
 * _strlen - This function returns the length of a string.
 * @s: The string to return the length
 *
 * Return: Length of s
 */
int _strlen(const char *s)
{
	long int len = 0;

	while (s != NULL && s[len] != '\0')
		len++;

	return (len);
}
