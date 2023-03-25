#include <stdio.h>
#include "main.h"

/**
 * print_triangle - prints a triangle on the terminal.
 * @size: The character to print
 *
 * Return: None.
 */
void print_triangle(int size)
{
	if (size > 0)
	{
		int i;
		int j;
		int lim;

		i = 1;
		j = 1;
		lim = size;
		while (i <= size)
		{
			while (j <= size)
			{
				if (j < lim)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
				j++;
			}
			_putchar('\n');
			i++;
			lim--;
			j = 1;
		}
	} else
	{
		_putchar('\n');
	}
}
