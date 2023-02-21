#include <unistd.h>
#include "main.h"

/**
 * _abs - compute the absolute value of an integer
 * @n: the number
 *
 * Return: the abs of n
 */

int _abs(int n)
{
	if (n < 0)
		n *= -1;

	return (n);
}
