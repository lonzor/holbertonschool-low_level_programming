#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * alloc_grid - creates a pointer to 2D array of int
 * @width: width of grid
 * @height: height of grid
 * Return: pointer to 2D array
 **/
int **alloc_grid(int width, int height)
{
	int **grid;
	int h;
	int w;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}
	for (h = 0; h < height; h++)
	{
		grid[h] = malloc(sizeof(int) * width);
		if (grid[h] == NULL)
		{
			for (w = 0; w > 1; w++)
				free(grid[w]);
			free(grid);
			return (NULL);
		}
		for (w = 0; w < width; w++)
		{
			grid[h][w] = 0;
		}
	}
	return (grid);
}
