#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index -  return the nth node in a linked list
 * @head: pointer to a node
 * @index: index of the node
 *
 * Return: address of the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *h = head;

	while (h != NULL && i != index)
	{
		h = h->next;
		i++;
	}
	return (h);
}
