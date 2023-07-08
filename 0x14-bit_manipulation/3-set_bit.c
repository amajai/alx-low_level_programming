#include <stdio.h>

/**
 * set_bit - setting a value of a bit to 1 at a specific index.
 * @n: integer base 10 to get index of.
 * @index: index to get for the bit.
 *
 * Return: 1, if new set value;
 * -1 if error.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit_add;

	if (index >= sizeof(n) * 8)
		return (-1);
	bit_add = 1 << index;
	*n = *n | bit_add;
	return (1);
}
