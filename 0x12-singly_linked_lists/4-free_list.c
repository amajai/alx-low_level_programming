#include <stdio.h>
#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * free_list - frees a list_t list.
 * @head: head of linked list.
 *
 * Return: free up linked list memory used.
 */
void free_list(list_t *head)
{
	list_t *curr_node;
	list_t *prev_node;

	curr_node = head;
	while (curr_node != NULL)
	{
		prev_node = curr_node;
		curr_node = curr_node->next;
		free(prev_node->str);
		free(prev_node);
	}

}
