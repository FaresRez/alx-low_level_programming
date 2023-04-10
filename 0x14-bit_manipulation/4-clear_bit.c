#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * clear_bit -  set the index bit to 0
 * @n: the pointer to a number
 * @index: index of the bit to set
 *
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(n) * 8))
		return (-1);
	*n ^= (1 << index);
	return (1);
}
