#include <stdio.h>
#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * _strlen - return number of chars in string.
 * @s: string to count
 *
 * Return: number of chars in string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: head of linked list.
 * @str: string passed.
 *
 * Return: updated linked list.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *dup_str;
	list_t *new;
	list_t *curr_node;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		dup_str = strdup(str);
		if (dup_str == NULL)
			return (NULL);
	}

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = dup_str;
	new->len = _strlen(dup_str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		curr_node = *head;
		while (curr_node->next != NULL)
		{
			curr_node = curr_node->next;
		}
		curr_node->next = new;
	}
	return (*head);
}
