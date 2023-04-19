#include <stdio.h>

/**
 * int_index - searches for an integer.
 * @array: array of numbers.
 * @size: size of array in integer.
 * @cmp: a function to do action.
 * Return: nothing.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, result;

	if (array == NULL || cmp == NULL)
		return;

	if (size < 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		result = cmp(array[i]);
		if (result)
			return (i);
	}
	return (-1);

}
