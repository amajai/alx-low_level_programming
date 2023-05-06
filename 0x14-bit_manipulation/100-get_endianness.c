#include <stdio.h>
/**
 * get_endianness - checks the endianness.
 *
 * Return: 1, if little endian;
 * 0 if bid endian.
 */
int get_endianness(void)
{
	int n;
	char *c;

	n = 1;
	c = (char *) &n;
	return (*c);
}
