#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints numbers.
 * @separator: the string to be printed between strings.
 * @n: number of integers passed to the function.
 *
 * Return: nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strs;
	unsigned int i;
	char *curr_str;

	if (n + '0' < '0' || n + '0' > '9')
	{
		return;
	}
	va_start(strs, n);
	for (i = 0; i < n; i++)
	{	curr_str = va_arg(strs, char *);
		if (curr_str == NULL)
			printf("(nil)");
		else
			printf("%s", curr_str);
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	va_end(strs);
	printf("\n");
}
