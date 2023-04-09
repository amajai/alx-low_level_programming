#include "main.h"

/**
 * _puts_recursion - prints a string.
 * @s :string to print.
 *i
 * Return: nothing.
 */
void _puts_recursion(char *s)
{
	int c;
	int i;

	c = 0;
	i = 0;
	while (s[c] != '\0') /* count chars */
	{
		c += 1;
	}

	while (c >= 0) /* print every other characters */
	{
		_putchar(s[i]);
		c -= 1;
		i += 1;
	}
	_putchar('\n');
}
