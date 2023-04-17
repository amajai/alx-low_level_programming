#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - counter number of characters in string
 * @s: string
 *
 * Return: number of characters;
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * new_dog - creates a new dog.
 * @name: dog name string.
 * @age: dog age int.
 * @owner: god owner name string.
 *
 * Return: pointer to new allocated memory.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, name_len, owner_len;
	dog_t *new_dog_mem;

	new_dog_mem = malloc(sizeof(struct dog));
	if (new_dog_mem == NULL)
		return (NULL);
	name_len = _strlen(name) + 1;
	new_dog_mem->name = malloc(sizeof(char) * name_len);
	if (new_dog_mem->name == NULL)
	{
		free(new_dog_mem);
		return (NULL);
	}
	for (i = 0; i < name_len; i++)
	{
		new_dog_mem->name[i] = name[i];
	}

	owner_len = _strlen(owner) + 1 + 1;
	new_dog_mem->owner = malloc(sizeof(char) * owner_len);
	if (new_dog_mem->owner == NULL)
	{
		free(new_dog_mem->name);
		free(new_dog_mem);
		return (NULL);
	}
	for (i = 0; i < owner_len; i++)
	{
		new_dog_mem->owner[i] = owner[i];
	}
	new_dog_mem->age = age;
	return (new_dog_mem);
}
