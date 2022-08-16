#include "lists.h"

/**
 * listint_len - function that returns the number of elements
 * @h: pointer of the linked list
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		c++;
		h = h->next;
	}

	return (c);
}
