#include <string.h>
#include <stdlib.h>
/**
* _strdup - duplicates string
* @str: string
* Return: address
*/
char *_strdup(char *str)
{
	int i;
	char *p_strdup;

	if (str != NULL)
	{
	p_strdup = malloc(sizeof(char) * (strlen(str) + 1));
	}
	else
	{
		return (NULL);
	}
	if (p_strdup == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		p_strdup[i] = str[i];
	}
	p_strdup[i + 1] = '\0';

	return (p_strdup);
}
