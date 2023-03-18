#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{

		if (n != 0)
		{
			putchar(',');
			putchar(' ');
		}
		putchar(48 + n);
	}
	putchar('\n');
	return (0);
}
