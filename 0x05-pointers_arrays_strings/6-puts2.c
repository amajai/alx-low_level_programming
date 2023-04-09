#include "main.h"

/**
 * puts2 - prints every other character of a string, starting with the first
 * character.
 * @str :string to print characters.
 *
 * Return: nothing.
 */
void puts2(char *str)
{
	int c;
	int i;

	c = 0;
	i = 0;
	while (str[c] != '\0') /* count chars */
	{
		c += 1;
	}
	c -= 1;
	while (c >= 0) /* print every other characters */
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		c -= 1;
		i += 1;
	}
	_putchar('\n');
}
