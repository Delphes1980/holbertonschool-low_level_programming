#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - returns to a 2 dimensional array of integers
* @width: width of the array
* @height: height of the array
*
* Return: to a pointer of a 2 dimensioanl array of integers
*/

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(width * sizeof(int *));

	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}

	for (i = 0; i < width; i++)
	{
		grid[i] = malloc(height * sizeof(int));

		if (grid[i] == NULL)
		{
			free(grid);
			return (NULL);
		}
	}

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			grid[i][j] = i * height + j;
		}
	}

	return (grid);

}
