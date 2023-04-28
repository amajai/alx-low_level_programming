#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a list_t list.
 * @h: struct list to go through.
 *
 * Return: number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *curr_node = h;
	size_t i = 0;

	while (curr_node != NULL)
	{
		printf("%d\n", curr_node->n);
		i++;
		curr_node = curr_node->next;
	}
	return (i);
}
