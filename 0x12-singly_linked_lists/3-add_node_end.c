#include <unistd.h>
#include <stdio.h>
#include<string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end -  add a new node to a linked list
 * @head: head of a node
 * @str: the value of node
 *
 * Return: number of nodes
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	int i = 0;
	list_t *p;

	if (new == NULL)
		return (NULL);
	if (*head == NULL)
		*head = new;
	p = *head;
	while (str[i])
		i++;
	while (p->next != NULL)
		p = p->next;
	p->next = new;

	new->str = strdup(str);
	new->next = NULL;
	new->len = i;
	return (new);
}

