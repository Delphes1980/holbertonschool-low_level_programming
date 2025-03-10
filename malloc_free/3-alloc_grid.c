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
	int i, j, k, l;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));

		if (grid[i] == NULL)
		{
			for (j = i; j >= 0; j--)
			{
				free(grid[j]);
			}

			free(grid);
			return (NULL);
		}
	}

	for (k = 0; k < height; k++)
	{
		for (l = 0; l < width; l++)
		{
			grid[k][l] = 0;
		}
	}

	return (grid);
}
