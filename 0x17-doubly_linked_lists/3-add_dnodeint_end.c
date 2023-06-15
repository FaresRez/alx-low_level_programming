#include "lists.h"
/**
 * add_dnodeint_end - add a new node
 * @head: the head of the list
 * @n: node data
 *
 * Return: new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *h = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->next = NULL;
	new->n = n;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	while (h->next != NULL)
		h = h->next;
	new->prev = h;
	h->next = new;
	return (new);
}
