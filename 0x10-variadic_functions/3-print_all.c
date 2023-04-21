#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - prints all types.
 * @format: number of types passed to the function.
 *
 * Return: nothing.
 */
void print_all(const char * const format, ...)
{
	va_list types;

	va_start(types, format);
	va_end(types);
}
