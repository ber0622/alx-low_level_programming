#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at a given index
 * @n: unsigned long integer the bit
 * @index: gets the value starts from 0
 * Return: -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int d;
	unsigned long int c;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	d = 1 << index;
	c = n & d;

	if (c == d)
		return (1);

	return (0);
}
