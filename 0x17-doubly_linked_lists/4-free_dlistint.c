#include "lists.h"

/**
 * free_dlistint - 
 * @head: the head of the list
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
    dlistint_t *node;
    dlistint_t *temp;

    if (head != NULL)
    {
        node = head;
        while (node != NULL)
        {
            temp = node->next;
            free(node);
            node = temp;
        }
    }
}
