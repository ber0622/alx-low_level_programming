#include "function_pointers.h"
/**
* print_name - prints function
* @name: assigned name
* @f: function pointer
* Return: void
*/
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
