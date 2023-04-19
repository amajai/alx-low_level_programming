#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - sum of the first and second integer.
 * @a: first integer.
 * @b: second integer.
 *
 * Return: value calculated.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - difference of the first and second integer.
 * @a: first integer.
 * @b: second integer.
 *
 * Return: value calculated.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplication of the first and second integer.
 * @a: first integer.
 * @b: second integer.
 *
 * Return: value calculated.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - division of the first and second integer.
 * @a: first integer.
 * @b: second integer.
 *
 * Return: value calculated.
 * if b is 0, return status 100
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - remainder for division of the first and second integer.
 * @a: first integer.
 * @b: second integer.
 *
 * Return: value calculated.
 * if b is 0, return status 100;
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
