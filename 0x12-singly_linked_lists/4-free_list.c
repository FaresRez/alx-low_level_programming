#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list -  print all the node of a linked list
 * @h: pointer to a node
 *
 * Return: number of nodes
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
