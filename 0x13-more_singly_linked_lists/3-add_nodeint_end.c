#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - adds a new node at the end of a linked list.
 * @head: head of linked list.
 * @n: integer passed.
 *
 * Return: updated linked list.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *curr_node;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		curr_node = *head;
		while (curr_node->next != NULL)
		{
			curr_node = curr_node->next;
		}
		curr_node->next = new;
	}
	return (*head);
}
