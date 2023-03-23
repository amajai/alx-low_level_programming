#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks for uppercase character.
 * @c: The character to print
 *
 * Return: If character is upper, 1 is returned else 0.
 */
int _isupper(int c)
{
	int cv;

	cv = c;
	if (cv >= 65 && cv <= 90)
	{
		return (1);
	}
	return (0);
}
