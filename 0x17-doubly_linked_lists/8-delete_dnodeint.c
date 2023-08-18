#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index of a dlistint_t
 * linked list.
 * @head: pointer to doubly linked list
 * @index: index to insert new node
 *
 * Return: 1 if it succeeded,
 * -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr_node = *head;
	dlistint_t *prev_node;
	unsigned int curr_index = 0;

	if (*head == NULL)
		return (-1);

	while (curr_node != NULL && curr_index != index)
	{
		curr_index++;
		prev_node = curr_node;
		curr_node = curr_node->next;
	}

	if (curr_index == index)
	{
		if (curr_index == 0)
		{
			if (curr_node->next != NULL)
				curr_node->next->prev = NULL;
			*head = curr_node->next;
		}
		else
		{
			prev_node->next = curr_node->next;
			if (curr_node->next != NULL)
				curr_node->next->prev = prev_node;
		}
		free(curr_node);
		return (1);
	}
	return (-1);
}
