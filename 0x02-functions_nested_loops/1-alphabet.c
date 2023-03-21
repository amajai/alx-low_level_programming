#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line.
 *
 * Return: Always 0.
 */
int print_alphabet(void)
{
	write(1, "abcdefghijklmnopqrstuvwxyz\n", 27);
	return (0);
}
