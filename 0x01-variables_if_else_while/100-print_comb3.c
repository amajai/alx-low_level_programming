#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int n1;
	int n2;
	int c;

	c = 1;
	for (n1 = 0; n1 <= 8; n1++)
	{
		for (n2 = c; n2 <= 9; n2++)
		{
			if (n1 != n2)
			{
				if (n1 != 0 || n2 != 1)
				{
					putchar(',');
					putchar(' ');
				}
				putchar(48 + n1);
				putchar(48 + n2);

			}
		}
		c += 1;
	}
	putchar('\n');
	return (0);
}
