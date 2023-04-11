#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars.
 * @size : Number of char to create.
 * @c : Specific char to add to arrays.
 *
 * Return: NULL when there is error or size is 0.
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	a = malloc(sizeof(char) * size);
	if (a == NULL)
	{
		return (a);
	}

	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	return (a);
}
