#include <stdio.h>
/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: integer base 10 to get index of.
 * @index: index to get for the bit.
 *
 * Return: 1, if new set value;
 * -1 if error.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit_adder;

	if (index >= sizeof(n) * 8)
		return (-1);

	bit_adder = 1 << index;

	*n = *n | bit_adder;

	return (1);
}
