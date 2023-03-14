#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - free tye memory
 * @height: length of pointr
 * @grid: pointer
 * Return: 0
 */
void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
		free(grid);
}
