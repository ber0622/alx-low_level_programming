#include <stdio.h>
#include "main.h"

void print_to_98(int n)
{
	for ( ; n > 98; n--)
	{
		printf("%d, ", n);
	}
	for ( ; n < 99; n++)
	{
		printf("%d, ", n);
	}
	printf("\n");
}
