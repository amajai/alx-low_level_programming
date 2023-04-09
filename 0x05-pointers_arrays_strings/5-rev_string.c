#include "main.h"

/**
 * rev_string - reverses a string.
 * @s :string to reverse.
 *
 * Return: nothing.
 */
void rev_string(char *s)
{
	int c;
	int i;
	char temp;

	c = 0;
	i = 0;
	while (s[c] != '\0') /* count chars */
	{
		c += 1;
	}
	c -= 1;
	while (i < c) /* reverse string */
	{
		temp = s[i];
		s[i] = s[c];
		s[c] = temp;
		c -= 1;
		i += 1;
	}
}
