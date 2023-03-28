#include <stdio.h>
#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: Swap value with b.
 * @b: Swap value with a.
 *
 * Return: Nothing.
 */
void swap_int(int *a, int *b)
{
	int ca;
	int cb;

	ca = *a;
	cb = *b;
	*a = cb;
	*b = ca;
}
