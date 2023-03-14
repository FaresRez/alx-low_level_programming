#include <unistd.h>
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - reserve a memory for a string copy with malloc
 * @str: pointer to string
 *
 * Return: a pointer or NULL
 */

char *_strdup(char *str)
{
	char *p;
	int i = 0;

	if (str == NULL)
		return (NULL);

	while (*str != '\0')
	{
		i++;
		str++;
	}
	p = malloc(sizeof(char) * i + 1);
	if (p == NULL)
		return (NULL);
	str -= i;
	while (*str != '\0')
	{
		*p = *str;
		p++;
		str++;
	}
	*p = '\0';
	p -= i;
	return (p);
}
