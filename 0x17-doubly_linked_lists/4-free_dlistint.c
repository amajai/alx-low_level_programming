#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: pointer to doubly linked list
 *
 * Return: updated doubly linked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr_node = head;
	dlistint_t *prev_node = NULL;

	while (curr_node != NULL)
	{
		prev_node = curr_node;
		curr_node = curr_node->next;
		free(prev_node);
	}
}
