#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: head of linked list.
 * @index: index the node to get.
 *
 * Return: node from linked list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *curr_node;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	curr_node = head;
	while (curr_node != NULL && i != index)
	{
		curr_node = curr_node->next;
		i++;
	}

	if (i == index)
		return (curr_node);
	return (NULL);
}
