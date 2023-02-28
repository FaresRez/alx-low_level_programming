#include <unistd.h>
#include <stdio.h>
#include "main.h"

/**
 * print_array - print array using pointers
 * @a: pointer
 * @n: nb elements to print
 *
 * Return: array
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		printf("%d", *(a + i));
		if (i != n)
			printf(", ");
	}
	printf("\n");
}
