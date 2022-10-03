#include "main.h"
#include <string.h>


/**
 * _strcat - concatenate two strings
 * @dest: parameter
 *@src: parameter
 * Return: char *
 */

char *_strcat(char *dest, char *src)
{
	int len, _len, i;

	i = 0;
	len = strlen(src);
	_len = strlen(dest);

	for (i = 0; i < len; i++)
	{
		dest[_len + i] = src[i];
	}
	return (dest);
}
