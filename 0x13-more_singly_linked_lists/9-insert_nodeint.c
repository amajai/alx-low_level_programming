#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index -  inserts a new node at a given position.
 * @head: head of linked list.
 * @idx: index to where to add node.
 * @n: integer to insert.
 *
 * Return: updated linked list.
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *curr_node;
	listint_t *prev_node;
	listint_t *new;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	curr_node = *head;

	while (curr_node != NULL && i <= idx)
	{
		prev_node = curr_node;
		curr_node = curr_node->next;
		i++;
	}

	if (i == idx + 1)
	{
		new->next = curr_node;
		if (i > 0)
		{
			prev_node->next = new;
			return (*head);
		}
		*head = new;
		return (*head);
	}
	return (NULL);
}
