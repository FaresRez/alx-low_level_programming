#include "lists.h"
/**
 * get_dnodeint_at_index - return a node at a specific index
 * @head: the head of the list
 * @index: the index given
 *
 * Return: a node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL || i <= index)
	{
		if (index == i)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
