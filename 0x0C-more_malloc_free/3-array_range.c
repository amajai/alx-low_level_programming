#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min : starting number.
 * @max : ending number.
 *
 * Return: pointer to memory for array, else NULL if it fails.
 */
int *array_range(int min, int max)
{
	int *mem;
	int size, i;

	if (min > max)
	{
		return (NULL);
	}
	size = (max - min) + 1;
	mem = malloc(sizeof(*mem) * size);
	if (mem == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (min <= max)
	{
		mem[i] = min;
		min++;
		i++;
	}
	return (mem);
}
