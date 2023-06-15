#include "lists.h"
/**
 * add_dnodeint - add a new node
 * @head: the head of the list
 * @n: node data
 *
 * Return: new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->prev = NULL;
	new->n = n;
	new->next = *head;
	if (head != NULL)
		(*head)->prev = new;
	*head = new;

	return (new);

}
