#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t
 * linked list.
 * @head:llinked list to go through.
 *
 * Return: sum of all data (n) from linked list.
 */
int sum_listint(listint_t *head)
{
	const listint_t *curr_node;
	int sum = 0;

	if (head == NULL)
		return (0);

	curr_node = head;
	if (curr_node == NULL)
		return (0);

	while (curr_node != NULL)
	{
		sum += curr_node->n;
		curr_node = curr_node->next;
	}
	return (sum);
}
