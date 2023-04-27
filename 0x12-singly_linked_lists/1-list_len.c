#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: struct list to go through.
 *
 * Return: number of nodes in list.
 */
size_t list_len(const list_t *h)
{
	const list_t *curr_node = h;
	size_t i = 0;

	while (curr_node != NULL)
	{
		i++;
		curr_node = curr_node->next;
	}
	return (i);
}
