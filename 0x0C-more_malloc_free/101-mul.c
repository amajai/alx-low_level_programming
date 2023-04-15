#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _printf - Print string.
 * @s : string.
 *
 * Return: nothing.
 */
void _printf(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
}
/**
 * _strlen - count number of characters in a string.
 * @s : string.
 *
 * Return: number of characters.
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * multiply - multiply n1 and n2.
 * @n1 : first number.
 * @n2 : second number.
 *
 * Return: 1 if successful and NULL if it fail;
 */
int multiply(char *n1, char *n2)
{
	int i, j, k, base, temp, n1_c, n2_c, carry;
	int *num_arr;

	n1_c = _strlen(n1);
	n2_c = _strlen(n2);
	num_arr = malloc(sizeof(*num_arr) * (n1_c + n2_c));
	if (num_arr == NULL)
	{
		exit(98);
	}
	for (i = 0; i < (n1_c + n2_c); i++)
	{
		num_arr[i] = 0;
	}
	base = 0;
	for (i = n1_c - 1; i >= 0; i--)
	{
		carry = 0;
		k = base;
		for (j = n2_c - 1; j >= 0; j--)
		{
			temp = (n1[i] - '0') * (n2[j] - '0') + num_arr[k] + carry;
			carry = temp / 10;
			num_arr[k] = temp % 10;
			k++;
		}
		num_arr[k] = carry;
		base++;
	}
	while (k >= 0 && num_arr[k] == 0)
	{
		k--;
	}
	for (i = k; i >= 0 ; i--)
	{
		_putchar(num_arr[i] + '0');
	}
	_putchar('\n');
	free(num_arr);
	return (0);
}
/**
 * main - multiplies two positive numbers.
 * @argc : number of arguments.
 * @argv : argument values in array.
 *
 * Return: 1 if sucessful, else status code 98 if it fails.
 */
int main(int argc, char **argv)
{
	int i, j;

	if (argc > 3 || argc < 3)
	{
		_printf("Error\n");
		exit(98);
	}
	for (i = 1; i < 3; i++)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				_printf("Error\n");
				exit(98);
			}
			j++;
		}
	}
	multiply(argv[1], argv[2]);
	return (0);
}
