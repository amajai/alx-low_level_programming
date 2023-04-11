#include <stdio.h>
#include "main.h"

/**
 *islower - checks for lowercase character.
 *
 * Return: 1 if lowercase, otherwise 0.
 */
int _islower(int c)
{
	int c;

	c = 0;

	while (c < 10)
	{
		write(1, "abcdefghijklmnopqrstuvwxyz\n", 27);
		c += 1;
	}

	return (0);
}
