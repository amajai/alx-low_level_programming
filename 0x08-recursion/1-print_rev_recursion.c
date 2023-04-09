#include "main.h"

/**
* print_chars_reverse - print one character from string in reverse.
* @s : string.
* @i : index of string.
*
* Return: always 1;
*/
int print_chars_reverse(unsigned int i, char *s)
{
	if (s[i] == '\0')
	{
		return (1);
	}
	if (print_chars_reverse(i + 1, s))
	{
		_putchar(s[i]);
	}
	return (1);
}

/**
 * _print_rev_recursion - prints a string in reverse.
 * @s :string to print in reverse.
 *
 * Return: nothing.
 */
void _print_rev_recursion(char *s)
{
	print_chars_reverse(0, s);
}
