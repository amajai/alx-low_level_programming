#include "main.h"

/**
* print_chars - print one character from string.
* @s : string.
* @i : index of string.
*
* Return: always 1;
*/
int print_chars(unsigned int i, char *s)
{
	if (s[i] == '\0')
	{
		_putchar('\n');
		return (1);
	}
	_putchar(s[i]);
	return (print_chars(i + 1, s));
}

/**
 * _puts_recursion - prints a string.
 * @s :string to print.
 *
 * Return: nothing.
 */
void _puts_recursion(char *s)
{
	print_chars(0, s);
}
