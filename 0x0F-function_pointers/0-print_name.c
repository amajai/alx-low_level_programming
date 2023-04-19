#include <stdio.h>

/**
 * print_name - prints name.
 * @name: name string.
 * @f: a function.
 *
 * Return: nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (*name != '\0')
		f(name);
}
