#include "main.h"
/**
* more_numbers - prints 10 times the numbers
*/
void more_numbers(void)
{
	int b, d;

	for (b = '0'; b < '11'; b++)
	{
		for (d = '0'; d < '15'; d++)
		{
			_putchar(d + '0');
		}
	}

	_putchar('\n');
}
