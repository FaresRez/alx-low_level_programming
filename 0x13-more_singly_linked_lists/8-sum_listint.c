#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint -  calculate the sum of a linked list
 * @head: pointer to a node
 *
 * Return: sum of nodes
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *h = head;

	while (h != NULL)
	{
		sum += h->n;
		h = h->next;
	}
	return (sum);
}
