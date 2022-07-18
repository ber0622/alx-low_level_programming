#include "main.h"
#include <string.h>

/**
 * *_memcpy - copies memory area
 * @dest: file1
 * @src: file2
 * @n: unsigned int
 * Return: pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
