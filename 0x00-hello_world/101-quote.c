#include <stdio.h>
#include <unistd.h>

/**
 * main - entry point
 * Return: 1
 */
int main(void)
{
	char var[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, var, sizeof(var) - 1);

	return (1);
}
