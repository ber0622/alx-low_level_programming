#include <stdio.h>
/**
 * main - function
 *
 * Return: output
 */
int main(void)
{
	int i, p;

	for (i = 0; i < 9; i++)
	{
		for (p = i + 1; p < 10; p++)
		{
			putchar(i + '0');
			putchar(p + '0');

			if (i == 8 && p == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
