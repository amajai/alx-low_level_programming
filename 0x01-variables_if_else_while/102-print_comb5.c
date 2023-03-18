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
	int n4;
	int c;

	for (n1 = 0; n1 <= 9; n1++)
	{
		for (n2 = 0; n2 <= 9; n2++)
		{
			c = n2 + 1;
			for (n3 = n1; n3 <= 9; n3++)
			{
				for (n4 = c; n4 <= 9; n4++)
				{
					if (n1 != 0 || n2 != 0 || n3 != 0 || n4 != 1)
					{
						putchar(',');
						putchar(' ');
					}
					putchar(48 + n1);
					putchar(48 + n2);
					putchar(' ');
					putchar(48 + n3);
					putchar(48 + n4);
				}
				c = 0;
			}
		}
	}
	putchar('\n');
	return (0);
}
