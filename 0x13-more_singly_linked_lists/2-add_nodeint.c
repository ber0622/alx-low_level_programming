#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - function that adds a new node
 * @head: the beginning of a listint_t list
 * @n: integer to add in list
 * Return: New address
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
