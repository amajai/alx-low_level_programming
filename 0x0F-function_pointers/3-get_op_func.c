#include <stdio.h>
#include "3-calc.h"
/**
 * get_op_func - pointer to a function.
 * @s: operator in string.
 *
 * Return: nothing.
 */
int (*get_op_func(char *s))(int, int)
{
	int i;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	i = 0;
	while (i < 5)
	{
		if (*s == *ops[i].op)
			return (ops[i].f);
		i++;
	}
	return (ops[i].f);
}
