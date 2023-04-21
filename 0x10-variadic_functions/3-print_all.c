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
	int i, isChecked;
	char c;
	const char *s;

	va_start(types, format);
	i = 0;
	while (format[i] != '\0')
	{
		isChecked = 1;
		switch (format[i++])
		{
			case 'c':
				c = va_arg(types, int);
				printf("%c", c);
				break;
			case 'i':
				printf("%d", va_arg(types, int));
				break;
			case 'f':
				printf("%f", va_arg(types, double));
				break;
			case 's':
				s = va_arg(types, char *);
				if (s == NULL || *s == '\0')
				{
					printf("(nil)");
					break;
				}
				printf("%s", s);
				break;
			default:
				isChecked = 0;
		}
		if (format[i] != '\0' && isChecked)
			printf(", ");
	}
	va_end(types);
	printf("\n");
}
