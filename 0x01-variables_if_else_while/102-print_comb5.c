#include <stdio.h>
/**
 * main - function
 *
 * Return: output
 */
int main(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			putchar(0);
			putchar(a + '0');
			putchar(0);
			putchar(b + '0');
			putchar(',');
			putchar(' ');
		}

		putchar('\n');
	}
	return (0);
}
