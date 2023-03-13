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

char *create_array(unsigned int size, char c)
{
	char *ar;

	if (size == 0)
		return (NULL);
	ar = malloc(size * sizeof(char));
	if (ar == NULL)
		return (NULL);
	ar[0] = c;
	return (ar);
}
