#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory, which
 * contains a copy of the string given as a parameter.
 * @str : string to copy.
 *
 * Return: NULL when there is an error or when str is NULL.
 */

char *_strdup(char *str)
{
	int i;
	int size;
	char *a;

	if (str == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	size = i + 1;

	a = malloc(sizeof(char) * size);
	if (a == NULL)
	{
		return (a);
	}

	for (i = 0; i < size; i++)
	{
		a[i] = str[i];
	}
	return (a);
}
