#include <stdio.h>
#include "main.h"

/**
 * pw - calculate exponantial value
 * @base: base value
 * @expo: exponant value/power of expo
 *
 * Return: result of the exponant
 */
unsigned int pw(unsigned int base, unsigned int expo)
{
	unsigned int ans = 1;
	unsigned int i = 0;

	while (i < expo)
	{
		ans *= base;
		i++;
	}
	return (ans);
}

/**
 * binary_to_uint - convert base 2 value to base 10
 * @b: binary string
 *
 * Return: base 10 value
 */
unsigned int binary_to_uint(const char *b)
{
	int count = 0, i = 0;
	unsigned int res = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[i] != '\0')
	{
		count++;
		i++;
	}
	count--;
	i = 0;
	while (count >= 0)
	{
		if (b[i] == '1' || b[i] == '0')
		{
			res += pw(2, count) * (b[i] - 48);
			i++;
			count--;
		}
		else
			return (0);
	}
	return (res);
}
