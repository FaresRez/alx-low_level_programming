#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index -  insert the nth node in a linked list
 * @head: pointer to a node
 * @idx: index of the node
 * @n: the new node data
 *
 * Return: address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new, *h = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0 || *head == NULL)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	while (h != NULL)
	{
		if (i == idx - 1)
		{
			new->next = h->next;
			h->next = new;
			return (new);
		}
		h = h->next;
		i++;
	}
		free(new);
		return (NULL);
}
