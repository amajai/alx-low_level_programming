#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: struct list to go through.
 *
 * Return: number of nodes.
 */
size_t print_list(const list_t *h)
{
	const list_t *curr_node = h;
	size_t i = 0;

	while (curr_node != NULL)
	{
		if (curr_node->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", curr_node->len, curr_node->str);
		i++;
		curr_node = curr_node->next;
	}
	return (i);
}
