#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1 : first string to combine.
 * @s2 : second string to combine.
 *
 * Return: pointer to a newly allocated space in memory, else NULL when there
 * is an error.
 */

char *str_concat(char *s1, char *s2)
{
	char *a;
	int size1, size2, i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	size1 = i;
	i = 0;
	while (s2[i] != '\0')
	{
		i++;
	}
	size2 = i + 1;
	a = malloc(sizeof(char) * (size1 + size2));
	if (a == NULL)
	{
		return (a);
	}
	for (i = 0; i < size1; i++)
	{
		a[i] = s1[i];
	}
	for (j = i, i = 0; i < size2; i++, j++)
	{
		a[j] = s2[i];
	}
	return (a);
}
