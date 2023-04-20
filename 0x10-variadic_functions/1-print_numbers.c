#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers.
 * @separator: the string to be printed between numbers.
 * @n: number of integers passed to the function.
 *
 * Return: prints string of number separated by a separator string.
 * if separator, NULL is returned.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i, curr_num;

	if (separator == NULL)
	{
		return;
	}
	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		curr_num = va_arg(nums, int);
		printf("%d", curr_num);
		if (i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(nums);
}
