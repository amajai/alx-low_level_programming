#include <stdio.h>
/**
 * get_endianness - checks the endianness.
 *
 * Return: 1, if little endian;
 * 0 if bid endian.
 */
int get_endianness(void)
{
	int i;
	char *c;

	i = 1;
	c = (char *) &i;
	return (*c);
}
