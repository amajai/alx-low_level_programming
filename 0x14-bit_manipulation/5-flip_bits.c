#include <stdio.h>
/**
 * flip_bits - returns the number of bits you would need to flip to get from
 * one number to another.
 * @n: integer base 10 to get index of.
 * @index: index to get for the bit.
 *
 * Return: 1, if new set value;
 * -1 if error.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bit_xor;
	unsigned int count = 0;

	bit_xor = n ^ m;

	while (bit_xor != 0)
	{
		count += bit_xor & 1;
		bit_xor = bit_xor >> 1;
	}

	return (count);
}
