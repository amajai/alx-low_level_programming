#include <stdio.h>
#include "main.h"


/**
 * print_bin_helper - recursive to print the binary numbers
 * @n: integer to convert.
 * @count: number of times n got divided
 *
 * Return: Always 0.
 */
int print_bin_helper(unsigned long int n, int count)
{
	unsigned long int new;

	if (n == 0)
	{
		if (count == 0)
			_putchar('0');
		return (0);
	}
	new = n >> 1;
	if (new * 2 == n)
	{
		print_bin_helper(new, count + 1);
		_putchar('0');
	}
	else
	{
		print_bin_helper(new, count + 1);
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
	print_bin_helper(n, 0);
}
