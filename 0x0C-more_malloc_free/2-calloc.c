#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb : number of elements.
 * @size : size of type.
 *
 * Return: pointer to memory for array, else NULL if it fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	int i, total;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	total = nmemb * size;
	mem = malloc(total);

	if (mem == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < total; i++)
	{
		((char *) mem)[i] = 0;
	}
	return (mem);
}
