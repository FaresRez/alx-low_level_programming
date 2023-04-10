#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_binary -  convert a decimal to binary
 * @n: the decimal number
 *
 * Return: the converted number
 */
void print_binary(unsigned long int n)
{
	int flag = 0;
	unsigned long int mask = 1ul << (sizeof(unsigned long int) * 8 - 1);

	if (n == 0)
		_putchar('0');
	while (mask)
	{
		if (n & mask)
		{
			_putchar('1');
			flag = 1;
		}
		else if (flag)
			_putchar('0');
		mask >>= 1;
	}
}
