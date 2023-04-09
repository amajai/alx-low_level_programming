#include "main.h"
/**
* count_string - count the total number of characters in a string.
* @s : string to count.
* @c : counter.
*
* Return: integer, total count;
*/
int count_string(unsigned int c, char *s)
{
	if (s[c] == '\0')
	{
		return (c);
	}
	return (count_string(c + 1, s));
}

/**
 * _strlen_recursion - returns the length of a string.
 * @s :string to print in reverse.
 *
 * Return: total count of characters.
 */
int _strlen_recursion(char *s)
{
	return (count_string(0, s));
}
