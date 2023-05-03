#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index -  deletes the node at index index of a
 * listint_t linked list.
 * @head: head of linked list.
 * @index: integer index of a node to delete.
 *
 * Return: 1 if it succeeded
 * -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr_node;
	listint_t *prev_node = NULL;
	unsigned int i = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	else
	{
		curr_node = *head;
		if (index == 0)
		{
			*head = curr_node->next;
			free(curr_node);
			return (1);
		}
		while (curr_node->next != NULL && i < index)
		{
			i++;
			prev_node = curr_node;
			curr_node = curr_node->next;
		}

		if (i < index)
		{
			return (-1);
		}
		else
		{
			prev_node->next = curr_node->next;
			free(curr_node);
			return (1);

		}
	}
}
