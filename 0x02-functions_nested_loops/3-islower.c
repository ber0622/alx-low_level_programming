#include "main.h"
/**
* _islower - shows lowercase letters
*@c: a character argument
* Return: 1 if successful, 0 if unsuccessful
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
