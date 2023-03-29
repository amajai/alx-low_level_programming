#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s :string to print.
 *
 * Return: nothing.
 */
void print_rev(char *s)
{
	int c;

	c = 0;
	while (1) /* count chars */
	{
		if (s[c] == '\0')
		{
			break;
		}
		c += 1;
	}
	while (c >= 0) /* reverse string */
	{
		_putchar(s[c]);
		c -= 1;
	}
	_putchar('\n');
}
