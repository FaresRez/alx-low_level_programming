#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 -  free a linked list
 * @head: pointer to a node
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *h = *head;

	while (h != NULL)
	{
		listint_t *p = h;

		h = h->next;
		free(p);
	}
	*head = NULL;
}
