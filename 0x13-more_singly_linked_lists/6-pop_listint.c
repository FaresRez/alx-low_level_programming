#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint -  free a linked list
 * @head: pointer to a node
 *
 * Return: void
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *h = *head;

	if (*head == NULL)
		return (0);
	n = h->n;
	*head = h->next;
	h->next = NULL;
	free(h);
	return (n);
}
