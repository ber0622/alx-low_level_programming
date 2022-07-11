#include "main.h"
#include <string.h>
#include <stdio.h>
/**
* _puts - prints a string, followed by a new line
* @str: parameter
*/
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
