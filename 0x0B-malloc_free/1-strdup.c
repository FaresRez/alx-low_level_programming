#include <unistd.h>
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create an array with malloc
 * @size: size of the array
 * @c: a caracter for init
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
	p = malloc(sizeof(char) * i);
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
