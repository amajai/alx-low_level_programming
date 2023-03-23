#include <stdio.h>

/**
 * _isdigit - checks for a digit (0 through 9).
 * @c: The character to print
 *
 * Return: If character is digit, 1 is returned else 0.
 */
int _isdigit(int c)
{
	int cv;

	cv = c;
	if (cv >= 48 && cv <= 57)
	{
		return (1);
	}
	return (0);
}
