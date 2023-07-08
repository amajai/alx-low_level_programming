#include <stdio.h>

/**
 * flip_bits - get back number of bits you need to flip to get from
 * one set number to another.
 * @n: first number.
 * @m: second number.
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
