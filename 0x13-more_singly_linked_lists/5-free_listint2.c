#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - frees a listint_t list and set head to NULL.
 * @head: head of linked list.
 *
 * Return: nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *curr_node;
	listint_t *prev_node;

	curr_node = *head;
	while (curr_node != NULL)
	{
		prev_node = curr_node;
		curr_node = curr_node->next;
		free(prev_node);
	}
	*head = NULL;
}
