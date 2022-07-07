#include "main.h"

/**
*_isupper - checks for Uppercase
*@c: displays character
* Return: 1 for uppercase and 0 for anything
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
