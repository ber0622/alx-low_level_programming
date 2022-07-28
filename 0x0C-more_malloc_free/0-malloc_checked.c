#include "main.h"
#include <stdlib.h>
/**
* *malloc_checked -  allocates memory
* @b: integer
* Return: 98
*/
void *malloc_checked(unsigned int b)
{
	void *p;
	p = (unsigned int*) malloc(sizeof(unsigned int) * b);

	if (p == NULL)
	{
		exit(98);
	}

	return (p);
}
