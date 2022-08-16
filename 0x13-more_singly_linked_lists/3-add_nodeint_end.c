#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - function that adds a new node at the end
 * @head: double pointer at the  beginning of a listint_t list
 * @n: integer to add in list
 * Return: address new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	last = *head;
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new;
	return (new);
}
