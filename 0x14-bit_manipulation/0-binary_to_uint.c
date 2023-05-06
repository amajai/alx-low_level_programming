#include <stdio.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: string
 *
 * Return: converted binary to integer
 * 0 if number is not binary.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int total = 0, bit = 1;
	int i = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
		i++;
	for (i = i - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
			total += bit;
		bit = bit << 1;
	}
	return (total);
}
