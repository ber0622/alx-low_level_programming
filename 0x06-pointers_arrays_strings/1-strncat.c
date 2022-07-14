#include "main.h"
#include <string.h>
/**
 * _strncat - a function that concatenates two strings
 * @dest: first string
 * @src: second string
 * @n: bytes
 * Return: resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
