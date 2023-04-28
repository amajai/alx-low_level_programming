#include <stdio.h>
#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: struct list to go through.
 *
 * Return: number of element in linked list.
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *curr_node = h;
	size_t i = 0;

	while (curr_node != NULL)
	{
		i++;
		curr_node = curr_node->next;
	}
	return (i);
}
