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
	int i = 0;
	char *s, *sep = "";

	va_start(types, format);
	if (format)
	{
		while (format[i] != '\0')
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(types, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(types, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(types, double));
					break;
				case 's':
					s = va_arg(types, char *);
					if (s == NULL || *s == '\0')
						s = "(nil)";
					printf("%s%s", sep, s);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}
	va_end(types);
	printf("\n");
}
