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
	return (p);

}
