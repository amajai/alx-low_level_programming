#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac : number of arguments.
 * @av : Argument values in an array.
 *
 * Return: Pointer to memory or NULL if error.
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, count, size;
	char *a;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	count = 0;
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			count++;
			j++;
		}
	}
	size = count + ac + 1;
	a = malloc(sizeof(char) * size);
	if (a == NULL)
	{
		return (NULL);
	}
	k = 0;
	for (i = 0; i < ac ; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			a[k] = av[i][j];
			j++;
			k++;
		}
		a[k] = '\n';
		k++;
	}
	return (a);
}
