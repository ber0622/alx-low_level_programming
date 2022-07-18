#include "main.h"
#include <string.h>
/**
 * *_strstr - locates a substring
 * @haystack: stringone
 * @needle: string2
 * Return: a pointer
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		while (*needle == *haystack && *needle != '\0' && *haystack != '\0')
		{
		haystack++;
		needle++;
		}
	if (*needle == '\0')
	return (haystack);
	haystack += 1;
	}
	return (NULL);
}
