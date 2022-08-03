#include "function_pointers.h"
/**
* array_iterator - a function that executes a function
* @array: as given
* @size: as given
* @action: function pointer
* Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && size > 0 && action != NULL)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
