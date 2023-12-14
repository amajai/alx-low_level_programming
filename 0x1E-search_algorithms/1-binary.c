#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of
 * integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search.
 * @size: number of elements in array.
 * @value: value to search for.
 *
 * Return: first index where value is located.
 * else, -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t L = 0;
	size_t R = size - 1;
	size_t k;
	size_t m;

	if (array == NULL)
		return (-1);

	while (L <= R)
	{
		printf("Searching in array: ");
		k = L;
		while (k <= R)
		{
			if (k != L)
			{
				printf(", ");
			}
			printf("%d", array[k]);
			k++;
		}
		printf("\n");
		m = (L + R) / 2;
		if (value > array[m])
			L = m + 1;
		else if (value < array[m])
			R = m - 1;
		else
			return (m);
	}
	return (-1);
}
