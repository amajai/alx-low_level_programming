#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143.
 *
 * Return: None.
 */
int main(void)
{
	long n;
	int d;

	n = 612852475143;
	d = 2;
	while (n > 1)
	{
		if (n % d == 0)
		{
			n = n / d;
		} else
		{
			d += 1;
		}

	}
	printf("%d\n", d);
	return (0);
}
