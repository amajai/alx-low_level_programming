#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: The character to print
 *
 * Return: None.
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int i;
		int j;
		int lim; /* limit value */

		i = 0;
		j = 0;
		lim = 0;
		while (i < n)
		{
			while (j < lim)
			{
				_putchar(' ');
				j++;
			}
			_putchar(92);
			_putchar('\n');
			i++;
			lim++;
			j = 0;
		}
	} else {
		_putchar('\n');
	}
}
