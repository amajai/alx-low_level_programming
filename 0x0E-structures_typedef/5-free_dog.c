#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees dogs (free allocated memory where dog data is saved).
 * @d: struct type.
 *
 * Return: nothing.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
