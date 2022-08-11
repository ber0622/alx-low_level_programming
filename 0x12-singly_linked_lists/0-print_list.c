#include "lists.h"
#include <stdio.h>
/**
* print_list - prints all elements
* @h: pointer
* Return: number of nodes
*/
size_t print_list(const list_t *h)
{
	size_t nodes = 0;
	const list_t *c = h;

	while (c != NULL)
	{
		printf("[%d] %s\n", c->len,
		c->str != NULL ? c->str : "(nil)");
		c = c->next;
		nodes++;
	}
	return (nodes);
}
