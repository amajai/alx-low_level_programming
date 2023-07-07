#include <stdio.h>

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
