#include <unistd.h>
#include "main.h"

/**
 * swap_int - swap the value of two integers using pointers
 * @a: pointer to a
 * @b: pointer to b
 *
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
