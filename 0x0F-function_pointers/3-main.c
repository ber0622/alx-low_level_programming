#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
* @argc: argument count
* @argv: argument vector
* Return: integer
*/
int main(int argc, char *argv[])
{
	int (*s)(int, int);
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	s = get_op_func(argv[2]);
	
	if (!s)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", s(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
