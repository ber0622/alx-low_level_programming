#include "main.h"
/**
* str_concat - concatenates two strings
* @s1: string1
* @s2: string2
* Return: concatenated string
*/
char *str_concat(char *s1, char *s2)
{
	int i, j, a, b;

	a = strlen(s1);
	b = strlen(s2);

	p = malloc(sizeof(s1) * i + sizeof(s2) * j + 1);

