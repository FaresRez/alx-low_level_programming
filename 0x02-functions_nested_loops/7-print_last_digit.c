#include <unistd.h>
#include "main.h"

/**
 * print_last_digit - print the last degit of an integer
 * @n: the number
 *
 * Return: n
 */

int print_last_digit(int n)
{
	n = n % 10;
	if (n < 0)
		n *= -1;
	_putchar(n + '0');
	return (n);
}
