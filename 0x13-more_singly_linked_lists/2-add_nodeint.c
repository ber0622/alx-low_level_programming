#include "lists.h"
#include <stdlib.h>

/**
* add_nodeint - adds a new node at the beginning of a listint_t list
* @head: first node
* @n: integer to add to the list
* Return: new address
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	new->n = n;
	new->next = *head;

	if (new == NULL)
		return (NULL);

	*head = new;

	return (new);
}
