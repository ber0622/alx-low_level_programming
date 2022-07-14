#include "main.h"
#include <string.h>
/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: result
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*(s1 + i) == *(s2 + i) && *(s1 + i))
		i++;

	if (*(s2 + i))
		return (*(s1 + i) - *(s2 + i));

	return (0);

}
