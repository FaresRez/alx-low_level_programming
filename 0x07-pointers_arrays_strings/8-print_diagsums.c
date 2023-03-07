#include <unistd.h>
#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: the array
 * @size: the size of array
 *
 * Return: print sum of diagonals
 */

char print_diagsums(int *a, int size)
{
	int i, j, d1 = 0, d2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				d1 += a[i][j];
			if (i + j == size - 1)
				d2 += a[i][j];
		}
	}
	printf("%d\, %d", d1, d2);
}
