#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times alphabets, in lowercase with new line.
 *
 * Return: Always 0.
 */
int print_alphabet_x10(void)
{
	int c;

	c = 0;

	while (c < 10)
	{
		write(1, "abcdefghijklmnopqrstuvwxyz\n", 27);
		c += 1;
	}

	return (0);
}
