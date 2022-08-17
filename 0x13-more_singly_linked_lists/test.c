#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * listint_len - linked lists
 * @h: lists
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}

/**
 * insert_nodeint_at_index - Insert a new node at a given positiion.
 * @head: First node address.
 * @idx: Position of the new node to be inserted in.
 * @n: Data of the new node.
 * Return: Address of the new node.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp;
	unsigned int count, i = 1;

	if (*head == NULL)
		return (NULL);
	temp = *head;

	if (idx != 0)
	{
		count = (int* ) listint_len;
		while (i < count)
		{
			temp = temp->next;
			i++;
		}
	}
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}
