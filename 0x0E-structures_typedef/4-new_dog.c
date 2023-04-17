#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
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
	dog_t *new_dog_mem;

	new_dog_mem = malloc(sizeof(struct dog));
	if (new_dog_mem == NULL)
		return (NULL);
	new_dog_mem->name = name;
	new_dog_mem->age = age;
	new_dog_mem->owner = owner;
	return (new_dog_mem);
}
