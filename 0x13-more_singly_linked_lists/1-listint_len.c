#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len -  calculate the count of the nodes in a linked list
 * @h: pointer to a node
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
