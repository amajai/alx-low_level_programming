#include <stdio.h>

/**
 * main -  prints the numbers from 1 to 100 where multiples of 3 print Fizz
 * instead of the number and for the multiples of 5 print Buzz.
 *
 * Return: None.
 */
int main(void)
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0)
		{
			printf("Fizz");

		}
		if (i % 5 == 0)
		{
			printf("Buzz");

		}
		if (i % 5 != 0 && i % 3 != 0)
		{
			printf("%d", i);
		}
		if (i < 100)
		{
			printf(" ");
		}
		i++;
	}
	printf("\n");
	return (0);
}
