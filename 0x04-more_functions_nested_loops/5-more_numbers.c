#include "main.h"
/**
* more_numbers - prints 10 times the numbers
*/
void more_numbers(void)
{
	int b, d;

	for (b = '0'; b <= '10'; b++)
	{
		for (d = '0'; d <= '14'; d++)
		{
			_putchar(d);
		}

	_putchar(b);
	}

	_putchar('\n');
}
