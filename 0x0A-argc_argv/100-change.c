#include <stdio.h>
#include <stdlib.h>
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
 * main - prints the minimum number of coins to make change for an amount
 * of money.
 * @argc : number of arguments.
 * @argv : argument values in an array.
 *
 * Return: 0 if successful; 1 if there is error.
 */
int main(int argc, char *argv[])
{
	int cents[5] = {25, 10, 5, 2, 1};
	int i, len, money, change_count;

	if (argc < 2 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	if (argv[1][0] == '-')
	{
		printf("%d\n", 0);
		return (0);
	}
	len = _strlen(argv[1]);
	for (i = 0; i < len; i++)
	{
		if (argv[1][i] < '0' || argv[1][i] > '9')
		{
			printf("Error\n");
			return (1);
		}
	}
	money = atoi(argv[1]);
	i = 0;
	change_count = 0;
	while (money != 0)
	{
		if (cents[i] > money)
		{
			i++;
		}
		else
		{
			change_count += money / cents[i];
			money = money % cents[i];
		}
	}
	printf("%d\n", change_count);
	return (0);
}

