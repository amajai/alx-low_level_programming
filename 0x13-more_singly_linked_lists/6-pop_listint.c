#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint -  deletes the head node of a listint_t linked list, and
 * returns the head node’s data (n).
 * @head: head of linked list.
 *
 * Return: first node n integer.
 */
int pop_listint(listint_t **head)
{
	listint_t *curr_node;
	listint_t *prev_node;
	int val;

	if (*head == NULL)
		return (0);
	curr_node = *head;
	prev_node = curr_node;
	val = prev_node->n;
	curr_node = curr_node->next;
	*head = curr_node;
	free(prev_node);
	return (val);
}
