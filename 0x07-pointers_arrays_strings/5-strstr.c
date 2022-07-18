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
	char *word1 = haystack;
	char *word2 = needle;

	while (*word2 == *haystack && *word2 != '\0' && *haystack != '\0')
	{
	haystack++;
	word2++;
	}
	if (*word2 == '\0')
	return (word1);
	haystack = word1 + 1;
	}
	return (NULL);
}
