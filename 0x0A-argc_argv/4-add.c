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
	int j;

	sum = 0;

	for (i = 1; i < argc; i++)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (argv[i][j] < '1' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
			j += 1;

		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}

