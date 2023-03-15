#include <unistd.h>
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concat 2 strings and assign them to new copy with malloc
 * @s1: pointer to string 1
 * @s2: pointer to string 2
 *
 * Return: a pointer or NULL
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0;
	char *p;
	char *res;

	if (s1 == NULL)
	{
		s1 = malloc(1);
		*s1 = '\0';
	}
	if (s2 == NULL)
	{
		s2 = malloc(1);
		*s2 = '\0';
	}
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	p = malloc(sizeof(char) * (i + j + 1));
	if (p == NULL)
		return (NULL);
	while (*s1)
		*p++ = *s1++;
	while (*s2)
		*p++ = *s2++;
	*p = '\0';
	p -= i + j;
	res = p;
	free(p);
	return (res);

}
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
	char *p = malloc(sizeof(char) * ac - 2);

	if (ac == 0 || av == NULL || p == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		p = str_concat(p, *(av + i));
		p = str_concat(p, "\n");
	}
	return (p);

}
