#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
#include <ctype.h>
/**
 * main - program that performs simple operations.
 * @argc: number of arguments
 * @argv: list of argument values
 *
 * Return: 0 if successful,
 * if divided or mod by 0, exit with the status 100.
 * if operator wrong, exit with the status 99.
 * if number of arguments is wrong, exit with the status 98.
 */
int main(int argc, char **argv)
{
	int result;
	int (*get_op)(int, int);

	if (argc > 4 || argc < 4)
	{
		printf("Error\n");
		exit(98);
	}
	get_op = get_op_func(argv[2]);
	if (get_op == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if (!isdigit(*argv[1]) || !isdigit(*argv[3]))
		return (1);
	result = get_op(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);
	return (0);
}
