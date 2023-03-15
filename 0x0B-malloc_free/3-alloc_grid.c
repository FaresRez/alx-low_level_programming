#include <unistd.h>
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - return a pointer to a multidimensionel array with malloc
 * @width: width of array
 * @height: height of array
 *
 * Return: a pointer or NULL
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **ar = (int **)malloc(sizeof(int) * height);

	if (ar == NULL || width <= 0 || height <= 0)
		return (NULL);
	for (i = 0; i < height; i++)
		ar[i] = (int *)malloc(sizeof(int) * width);
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			ar[i][j] = 0;
	return (ar);
}
