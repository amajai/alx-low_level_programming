#include <stdio.h>
#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14.
 *
 * Return: None.
 */
void more_numbers(void)
{
	int i;
	int j;
	int k;
	int lim; /* limit value */

	i = 0;
	j = 0;
	k = 0;
	lim = 9;
	while (k < 10)
	{
		while (i <= 1)
		{
			while (j <= lim)
			{
				if (i > 0)
				{
					_putchar(48 + i);
				}
				_putchar(48 + j);
				j++;
			}
			i++;
			j = 0;
			lim = 4;
		}
		k++;
		i = 0;
		j = 0;
		lim = 9;
		_putchar('\n');
	}
}
