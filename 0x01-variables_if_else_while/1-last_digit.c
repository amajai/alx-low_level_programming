#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 * function: print random number with message
 *
 * Return: Allows 0
 */
int main(void)
{
	int n;
	int ld; /* Last digit variable */

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;

	if (ld == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, ld);
	}
	else if (ld > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, ld);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ld);
	}
	return (0);
}
