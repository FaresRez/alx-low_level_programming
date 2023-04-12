#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * flip_bits - calculate the number of different bits of 2 numbers
 * @n: the number
 * @m: the number to compare
 *
 * Return: count of different bites
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, k = 0;

	for (i = 0; i < 32; i++)
	{
		if ((n >> i & 1) ^ (m >> i & 1))
			k++;
	}
	return (k);
}
