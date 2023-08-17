#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: pointer to doubly linked list
 * @idx: index to insert new node
 * @n: value to add to node
 *
 * Return: updated doubly linked list
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *curr_node = *h;
	dlistint_t *new_node;
	dlistint_t *prev_node;
	unsigned int curr_index = 0;

	if (h == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	if (idx == 0)
	{
		new_node->next = *h;
		*h = new_node;
		return (*h);
	}
	while (curr_node != NULL && curr_index != idx)
	{
		curr_index++;
		prev_node = curr_node;
		curr_node = curr_node->next;
	}
	if (curr_index == idx)
	{
		prev_node->next = new_node;
		new_node->prev = prev_node;
		new_node->next = curr_node;
		curr_node->prev = new_node;
	}
	else
	{
		free(new_node);
		return (NULL);
	}
	return (new_node);
}
