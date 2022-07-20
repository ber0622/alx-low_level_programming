#include "main.h"
/**
 * is_prime_number - checks for prime number
 * @n: integer
 * Return: 1and0
 */
int is_prime_number(int n)
{
	if (n % n && n % 1 == 0)
	       return (1);
	else
		return (0);
}
