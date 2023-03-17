#include <unistd.h>
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - concat 2 init a memory space with malloc
 * @b: the size allocated
 *
 * Return: a pointer or NULL
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *p = malloc(sizeof *p * b);
	if (p == NULL)
		return ((void *)98);
	return (p);
}
