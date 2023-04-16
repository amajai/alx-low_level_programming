#include "main.h"

/**
 * _strlenr - count number characters in string recursively.
 * @i : character array index.
 * @s : string of characters
 *
 * Return: length of string value.
 */
int _strlenr(int i, char *s)
{
	if (s[i] == '\0')
	{
		return(1);
	}
	return (1 + _strlenr(i+1, s));
}
/**
 * palindrome_check - check if the number is a palindrome.
 * @i : character array index.
 * @s : string to check.
 * @len : length of string.
 *
 * Return: 1 if its a palindrome, else 0.
 */
int palindrome_check(int i, char *s, int len)
{
	if ((len - 1) / 2 == i)
	{
		return (1);
	}
	if (s[i] == s[len - 2 - i])
	{
		return (palindrome_check(i + 1, s, len));
	}
	return (0);
}
/**
 * is_palindrome -  returns 1 if a string is a palindrome and 0 if not.
 * @s : string to check.
 *
 * Return: 1 if its a palindrome else 0.
 */
int is_palindrome(char *s)
{
	int len;

	len = _strlenr(0, s);
	return (palindrome_check(0, s, len));
}
