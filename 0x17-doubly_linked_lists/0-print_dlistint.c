#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: pointer to doubly linked list
 *
 * Return: number of elements in doubly linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;
	dlistint_t const *curr = h;

	while (curr != NULL)
	{
		n++;
		printf("%i\n", curr->n);
		curr = curr->next;
	}
	return (n);
}
