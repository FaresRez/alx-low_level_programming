#include <unistd.h>
#include <stdio.h>
#include<string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint -  add a new node to a linked list
 * @head: head of a node
 * @n: the value of node
 *
 * Return: adress of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
