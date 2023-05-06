#include <stdio.h>
/**
 * get_bit - returns the value of a bit at a given index.
 * @n: integer base 10 to get index of.
 * @index: index to get for the bit.
 *
 * Return: index of the integer binary;
 * -1 if error.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index >= sizeof(n) * 8)
		return (-1);

	bit = (n >> index) & 1;

	return (bit);
}
