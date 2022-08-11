#include "lists.h"
#include <stdio.h>
/**
* print_list - prints all elements
* @h: pointer
* Return: number of nodes
*/
size_t print_list(const list_t *h)
{
	const list_t *p = h;
	size_t n = 0;

	while (p != NULL)
	{
		printf("[%d] %s\n", p->len, p->str);
		p = p->next;
		n++;
	}
	return (n);
}
