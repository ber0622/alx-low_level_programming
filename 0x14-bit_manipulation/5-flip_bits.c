#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would need to flip
 * @n: pointer number of bits
 * @m: 2nd number
 * Return: bits flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int d;
	unsigned long int last;
	unsigned int first;
	unsigned int y;

	first = 0;
	last = 1;

	d = n ^ m;

	for (y = 0; y < (sizeof(unsigned long int) * 8); y++)
	{
		if (last == (d & last))
			first++;
			last <<= 1;
	}

	return (first);
}
