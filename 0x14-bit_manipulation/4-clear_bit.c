#include <stdio.h>

/**
 * clear_bit - setting value of a bit to 0 at a specific index.
 * @n: integer base 10 to get index of.
 * @index: index to get for the bit.
 *
 * Return: 1, if new set value;
 * -1 if error.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit_to_remove;

	if (index >= sizeof(n) * 8)
		return (-1);

	bit_to_remove = ~(1 << index);

	*n = *n & bit_remover;

	return (1);
}
