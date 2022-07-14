#include "main.h"
#include <string.h>
/**
 * _strncpy - copies a string
 * @dest: param1
 * @src: param2
 * @n: param3
 * Return: copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return(dest);
}
