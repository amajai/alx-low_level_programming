#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: Size of the hashtable
 *
 * Return: pointer to the newly created hash table
 **/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash_table;
	unsigned long int i;

	new_hash_table = malloc(sizeof(hash_table_t));
	if (new_hash_table == NULL)
		return (NULL);

	new_hash_table->size = size;
	new_hash_table->array = calloc(new_hash_table->size, sizeof(hash_node_t *));
	for (i = 0; i < new_hash_table->size; i++)
	{
		new_hash_table->array[i] = NULL;
	}
	return (new_hash_table);
}
