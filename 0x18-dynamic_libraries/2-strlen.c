#include <stdio.h>
#include "main.h"
/**
 * _strlen - test
 * @s : int
 *
 * Return: 0
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
