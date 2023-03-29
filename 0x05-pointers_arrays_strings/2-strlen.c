#include <stdio.h>
#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s :string to count.
 *
 * Return: integer for length of string.
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (1)
	{
		if (s[i] == '\0')
		{
			break;
		}
		i += 1;
	}
	return (i);
}
