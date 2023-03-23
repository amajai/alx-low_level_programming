#include <stdio.h>
#include "main.h"

/**
 * print_square - prints a square on the terminal.
 * @size: The character to print
 *
 * Return: None.
 */
void print_square(int size)
{
	if (size > 0)
	{
		int i;
		int j;

		i = 0;
		j = 0;
		while (i < size)
		{
			while (j < size)
			{
				_putchar('#');
				j++;
			}
			_putchar('\n');
			i++;
			j = 0;
		}
	} else
	{
		_putchar('\n');
	}
}
