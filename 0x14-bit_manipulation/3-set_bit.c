#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @n: pointer that checks set number
 * @index: set bit
 * Return: 1 if working and -1 if not
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int y;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	y = 1 << index;
	*n = *n | y;
	return (1);
}
