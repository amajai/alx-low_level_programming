#include <stdio.h>

/**
 * array_iterator - executes a function given as a parameter on each element
 * of an array.
 * @array: array of numbers.
 * @size: size of array in integer.
 * @action: a function to do action.
 * Return: nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
