#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers.
 * @argc : args counts.
 * @argv : args values in array.
 *
 * Return: 0 if successful; 1 if there is error.
 */
int main(int argc, char *argv[])
{
	int sum;
	int i;

	sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (isdigit(*argv[i]))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", sum);
	return (0);
}

