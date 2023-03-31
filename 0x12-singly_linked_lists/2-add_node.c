#include <unistd.h>
#include <stdio.h>
#include<string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node -  add a new node to a linked list
 * @head: head of a node
 * @str: the value of node
 *
 * Return: number of nodes
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->next = *head;
	*head = new;
	return (*head);
}

