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
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: head of linked list.
 * @str: string passed.
 *
 * Return: number of nodes in list.
 */
list_t *add_node(list_t **head, const char *str)
{
	char *dup_str = strdup(str);
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = dup_str;
	new->len = _strlen(dup_str);
	new->next = *head;
	*head = new;
	return (*head);
}
