#include "main.h"

/**
* print_last_digit - shows the last digit of a number
* @n: parameter
* Return: last digit
*/
int print_last_digit(int n)
{
	int d;

	if (n < 0)
	n = -n;
	d = n % 10;
	_putchar(d + '0');
	return (d);
}
