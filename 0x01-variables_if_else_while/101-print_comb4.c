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
	int n3;
	int c;

	c = 1;
	for (n1 = 0; n1 <= 7; n1++)
	{
		for (n2 = c; n2 <= 8; n2++)
		{
			for (n3 = c + 1; n3 <= 9; n3++)
			{
				if (n1 != n2 && n2 != n3)
				{
					if (n1 != 0 || n2 != 1 || n3 != 2)
					{
						putchar(',');
						putchar(' ');
					}
					putchar(48 + n1);
					putchar(48 + n2);
					putchar(48 + n3);
				}
			}

		}
		c += 1;
	}
	putchar('\n');
	return (0);
}
