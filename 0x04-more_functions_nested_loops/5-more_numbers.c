#include "main.h"
/**
* more_numbers - prints 10 times the numbers
*
*/
void more_numbers(void)
{
	int a, x;

	for (x = 0; x <= 9; x++)
	{
	for (a = 0; a <= 14; a++)
	{
	if (a > 9)
	{
	_putchar(1 + '0');
	}
	_putchar(a % 10 + '0');
	}
	_putchar('\n');
	}
}
