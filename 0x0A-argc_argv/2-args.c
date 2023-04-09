#include <stdio.h>

/**
 * main - prints all arguments it receives.
 * @argc : args counts.
 * @argv : args values in array.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

