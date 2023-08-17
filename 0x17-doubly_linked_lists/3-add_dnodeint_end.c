#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: pointer to doubly linked list
 * @n: value to add to new node
 *
 * Return: updated doubly linked list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *curr_node = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (curr_node != NULL)
	{
		while (curr_node->next != NULL)
		{
			curr_node = curr_node->next;
		}
		curr_node->next = new_node;
		new_node->prev = curr_node;
		new_node->next = NULL;
	}
	else
	{
		new_node->prev = NULL;
		new_node->next = NULL;
		*head = new_node;
	}
	return (*head);
}
