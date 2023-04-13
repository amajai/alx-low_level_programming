#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - count characters in string.
 * @s : string.
 *
 * Return: number characters in string.
 */
int _strlen(char *s)
{
	int i, count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		count++;
		i++;
	}
	return (count);
}
/**
 * string_nconcat - concatenates two strings.
 * @s1 : first string.
 * @s2 : second string.
 * @n : number of characters in s2 to combine with s1.
 *
 * Return: pointer to new concatenated strings, else NULL if it fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, s1_c, s2_c;
	char *mem;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	i = 0;
	s2_c = _strlen(s2);
	if (n < s2_c)
	{
		s2_c = n;
	}
	i = 0;
	s1_c = _strlen(s1);
	mem = malloc(sizeof(char) * (s1_c + s2_c + 1));
	if (mem == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < s1_c; i++)
	{
		mem[i] = s1[i];
	}
	for (j = i, i = 0; i < s2_c; j++, i++)
	{
		mem[j] = s2[i];
	};
	mem[j] = '\0';
	return (mem);
}
