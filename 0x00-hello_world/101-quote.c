#include <stdio.h>
#include <unistd.h>

/**
 * main - Prints message to the standard error
 *
 * Return: Always 1 (Error)
 */
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19", 59);
	write(1, "\n", 1);
	return (1);
}
