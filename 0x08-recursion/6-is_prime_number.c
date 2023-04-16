#include "main.h"
/**
 * check_prime_number - check if the number is prime.
 * @d : factor to check reminder of n.
 * @n : interger number to check if it a prime number.
 *
 * Return: 1 if its a prime number, else 0.
 */
int check_prime_number(int d, int n)
{
	if (n < 2)
	{
		return (0);
	}
	if (d > n / 2)
	{
		return (1);
	}
	if (n % d == 0)
	{
		return (0);
	}
	return (check_prime_number(d + 1, n));
}
/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 * otherwise return 0.
 * @n : number to check.
 *
 * Return: 1 if its a prime number else 0.
 */
int is_prime_number(int n)
{
	return (check_prime_number(2, n));
}
