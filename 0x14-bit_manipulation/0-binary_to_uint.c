#include "main.h"

/**
 * binary_to_uint - a function that converts a binary number
 * @b: pointer construct character containg bin num
 * Return: 0 if error
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	int x;

	i = 0;
	if (!b)
		return (0);
	for (x = 0; b[x] != '\0'; x++)
	{
		if (b[x] != '0' && b[x] != '1')
			return (0);
	}

	for (x = 0; b[x] != '\0'; x++)
	{
		i <<= 1;
		if (b[x] == '1')
		i += 1;
	}
	return (i);
}
