#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: pointer to doubly linked list
 *
 * Return: number of elements in doubly linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;
	dlistint_t const *curr = h;

	while (curr != NULL)
	{
		n++;
		curr = curr->next;
	}
	return (n);
}
