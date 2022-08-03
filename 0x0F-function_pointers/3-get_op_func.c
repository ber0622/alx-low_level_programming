#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
* get_op_func - Looks for the most suitable function to calculate.
* @s: Is the operator passed as argument to the program.
* Return: A pointer to the function that corresponds to the operator
* given as a parameter.
**/

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	int i;
	
	i = 0;
	while (i <= 4)
	{
	if (*ops[i].op == *s)
	{
	return (*(ops[i]).f);
	}
	i++;
	}
	return (NULL);
}
