#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
* op_add - Fctn for addition
* @a:First interger
* @b: Second interger
* Return: Checks for success
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - Fctn for subtraction
* @a: First interger
* @b: second interger
* Return: Checks for success
*/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
* op_mul - Fctn for Multiplication
* @a: first interger
* @b: second interger
* Returns: Checks for success
*/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
* op_div - fctn for division
* @a: first interger
* @b:second interger
* return: checks for success
*/
int op_div(int a, int b)
{
	if (b == 0)
	printf ("Error\n");
	exit(100);
	else
	{
	return (a / b);
	}
}
/**
* op_mod - fctn for modulus
* @a: first interger
* @b: second interger
* return: check for sucess
*/
int op_mod(int a, int b)	
{
	if (b == 0)
	printf ("Error\n");
	exit(100);
	else
	{
	return (a % b);
	}
}
