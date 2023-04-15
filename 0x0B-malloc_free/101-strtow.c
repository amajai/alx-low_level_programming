#include <stdio.h>
#include <stdlib.h>

/**
 * strtow - splits a string into words.
 * @str : string of words.
 *
 * Return: pointer to an array of strings (words), else NULL when there
 * is an error.
 */
char **strtow(char *str)
{
	char **words;
	int i, j, len, count, isWord;

	if (str == NULL || str == "")
	{
		return (NULL);
	}
	size = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			isWord = 1;
			size++;
		}
		else
		{
			if (isWord == 1)
			{
				isWord = 0;
				size++;
				count++;
			}
		}
	}
	words = malloc(sizeof(char *) * (count + 1));
	if (words == NULL)
	{
		return (grid);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
