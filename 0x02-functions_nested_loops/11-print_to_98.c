#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints
 *
 * @n: integer
 */

void print_to_98(int n)
{
	for ( ; n > 98; n--)
	{
		printf("%d", n);
		
		if (n == 98)
			continue;
		printf(", ");
	}
	for ( ; n < 99; n++)
	{
		printf("%d", n);

		if (n == 98)
			continue;
		printf(", ");
	}
	printf("\n");
}
