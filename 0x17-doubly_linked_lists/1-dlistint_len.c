#include "lists.h"
/**
 * dlistint_len - list len
 * @h: the head of the list
 *
 * Return: int 
 */

size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
