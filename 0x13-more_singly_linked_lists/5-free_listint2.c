#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - frees the list
 * @head: first node
 */
void free_listint2(listint_t **head)
{
	listint_t *p;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		p = *head;
		*head = (*head)->next;
		free(p);
	}
}
