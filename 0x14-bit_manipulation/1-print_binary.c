#include <stdio.h>
#include "main.h"

/**
 * get_bin - a recursive function to print the binary values
 * @n: integer.
 * @count: number of times n was divided
 *
 * Return: Always 0.
 */
int get_bin(unsigned long int n, int count)
{
	unsigned long int nval;

	if (n == 0)
	{
		if (count == 0)
			_putchar('0');
		return (0);
	}
	nval = n >> 1;
	if (nval * 2 == n)
	{
		get_bin(nval, count + 1);
		_putchar('0');
	}
	else
	{
		get_bin(nval, count + 1);
		_putchar('1');
	}
	return (0);
}
/**
 * print_binary - prints the binary representation of a number.
 * @n: integer to convert to binary.
 *
 * Return: converted integer to binary
 */
void print_binary(unsigned long int n)
{
	get_bin(n, 0);
}
