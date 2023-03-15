#include <unistd.h>
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concat all args of your program with malloc
 * @ac: nb des args
 * @av: pointer to pointer to array of args
 *
 * Return: a pointer or NULL
 */
char *argstostr(int ac, char **av)
{
	int i;
	char *p = malloc(sizeof(char) * ac + 1);

	if (ac == 0 || av == NULL || p == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		p = str_concat(p, *(av + i));
		p = str_concat(p, "\n");
	}
	return (p);
	
}
