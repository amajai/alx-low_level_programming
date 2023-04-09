#include "main.h"

/**
 * puts_half - prints half of a string.
 * @str :string to print second half of.
 *
 * Return: nothing.
 */
void puts_half(char *str)
{
	int c;
	int i;

	c = 0;
	i = 0;
	while (str[c] != '\0') /* count chars */
	{
		c += 1;
	}

	if (c % 2 == 0)
	{
		i = c / 2;

	}
	else
	{
		i = (c - 1) / 2;
	}
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 1;
	}
	_putchar('\n');
}
