#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list -  free a linked list
 * @head: pointer to a node
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *h = head;

	while (h != NULL)
	{
		list_t *p = h;

		h = h->next;
		free(p->str);
		free(p);
	}
}
