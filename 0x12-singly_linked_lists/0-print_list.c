#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_strings -  print all the variadic function args
 * @separator: pointer to string to be printed between numbers
 * @n: nb of args
 *
 * Return: void
 */
size_t print_list(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		if (h -> str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%d] %s\n",h -> len, h -> str);
		}
		i++;
		h = h -> next;
	}
	return (i);
}
