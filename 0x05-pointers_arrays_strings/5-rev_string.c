#include "main.h"
#include <string.h>
/**
* rev_string - reverses a string
* @s: string
*/
void rev_string(char *s)
{
	int i, j;
	char c;

	i = 0;
	j = strlen(s) - 1

	while (i < j)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
		i++, j--;
	}
}
