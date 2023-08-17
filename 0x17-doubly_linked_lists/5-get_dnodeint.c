#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: pointer to doubly linked list
 * @index: doubly linked list index
 *
 * Return: doubly linked list node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *curr_node = head;
	unsigned int curr_index = 0;

	while (curr_node != NULL && curr_index != index)
	{
		curr_index++;
		curr_node = curr_node->next;
	}
	return (curr_node);
}
