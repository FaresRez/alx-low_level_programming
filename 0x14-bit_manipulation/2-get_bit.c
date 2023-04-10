#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * get_bit -  convert a binary to unsigned int
 * @n: the number
 * @index: the index of the bit
 *
 * Return: the bit in index position
 */
int get_bit(unsigned long int n, unsigned int index)
{	
	if (index > (sizeof(n) * 8))
		return (-1);
	return((n >> index) & 1);
}
