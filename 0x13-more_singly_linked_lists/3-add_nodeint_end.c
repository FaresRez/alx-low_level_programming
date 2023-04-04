#include <unistd.h>
#include <stdio.h>
#include<string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end -  add a new node at the end of a linked list
 * @head: head of a node
 * @n: the value of node
 *
 * Return: address of new nodes
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *p;

	if (new == NULL)
		return (NULL);
	if (*head == NULL)
		*head = new;
	p = *head;
	while (p->next != NULL)
		p = p->next;
	p->next = new;

	new->n = n;
	new->next = NULL;
	return (new);
}
