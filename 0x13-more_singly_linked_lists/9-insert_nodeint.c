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
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	curr_node = *head;

	while (curr_node != NULL && i < idx)
	{
		prev_node = curr_node;
		curr_node = curr_node->next;
		i++;
	}

	if (i == idx)
	{
		prev_node->next = new;
		new->next = curr_node;
		return (new);
	}
	free(new);
	return (NULL);
}
