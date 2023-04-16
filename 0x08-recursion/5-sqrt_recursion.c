#include "main.h"
/**
 * get_sqrt_factor - get factor that can multiply by itself
 * to get that integer n.
 * @f : factor to check.
 * @n : interger number to get factor for.
 *
 * Return: factor number if successful, else -1 if its not have a
 * natural square root.
 */
int get_sqrt_factor(int f, int n)
{
	if (f * f == n)
	{
		return (f);
	}
	if (f * f > n)
	{
		return (-1);
	}
	return (get_sqrt_factor(f + 1, n));
}
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n : number.
 *
 * Return: value.
 */
int _sqrt_recursion(int n)
{
	return (get_sqrt_factor(1, n));
}
