#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index -  delete the nth node in a linked list
 * @head: pointer to a node
 * @index: index of the node
 *
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *prev, *h = *head;

	if (h == NULL)
		return (-1);
	if (index == 0)
	{
		*head = h->next;
		free(h);
		return (1);
	}
	while (h != NULL && i < index)
	{
		prev = h;
		h = h->next;
		i++;
	}
	prev->next = h->next;
	free(h);
	return (1);
}
