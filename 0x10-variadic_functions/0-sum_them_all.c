#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: number of a arguments added.
 *
 * Return: sum of the arguments.
 * if n is 0, 0 is returned.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int i, sum;

	if (n <= 0)
	{
		return (0);
	}
	va_start(nums, n);

	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(nums, int);
	}
	va_end(nums);
	return (sum);


}
