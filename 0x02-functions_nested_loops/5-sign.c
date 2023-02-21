#include <unistd.h>
#include "main.h"

/**
 * print_sign - print the signe of a given number
 * @n: the number checked
 *
 * Return: 1 and + if >0 OR 0 and 0 if =0 OR -1 and - if <0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
