#include <unistd.h>
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - free a multidimensionel array with malloc
 * @grid: pointer to pointer of int array (2d)
 * @height: height of array
 *
 * Return: a pointer or NULL
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(&grid[i])
	free(grid);
}
