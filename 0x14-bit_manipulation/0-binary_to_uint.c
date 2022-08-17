#include "main.h"
/**
 * int binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer
 * Return: result
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	int x;

	if (b == NULL)
		return (0);
	for (x = 0; b[x] = '\0'; x++)
	{
		if (b[x] != 0 && b[x] != 1)
			return (0);
	}

	for (x = 0; b[x] != '\0'; x++)
	{

	}

	return (i);
}
