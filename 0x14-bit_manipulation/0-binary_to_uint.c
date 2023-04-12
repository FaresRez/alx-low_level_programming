#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * binary_to_uint -  convert a binary to unsigned int
 * @b: the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int j = 0, c = 1, sum = 0;
	int i;

	if (b == NULL)
		return (0);
	while (b[j + 1] != '\0')
		j++;
	for (i = j; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
			sum += c;
		c *= 2;
	}
	return (sum);
}
