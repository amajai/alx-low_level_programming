#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @str :string to print.
 *
 * Return: nothing.
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (1)
	{
		if (str[i] == '\0')
		{
			break;
		}
		else
		{
			_putchar(str[i]);
		}
		i += 1;
	}
	_putchar('\n');
}
