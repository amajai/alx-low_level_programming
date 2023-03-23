#include <stdio.h>
#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 * @n: The character to print
 *
 * Return: None.
 */
void print_line(int n)
{
	if (n > 0)
	{
		int i;

		i = 0;
		while (i < n)
		{
			_putchar('_');
			i++;
		}
	}
	_putchar('\n');
}
