#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers.
 * @argc : number of arguments.
 * @argv : argument values in an array.
 *
 * Return: 0 if successful; 1 if there is error.
 */
int main(int argc, char *argv[])
{
	int sum;
	int i;

	sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) > 0)
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

