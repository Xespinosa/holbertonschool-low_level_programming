#include <string.h>
#include <stdlib.h>

/**
 * alloc_grid - create a grid that initialezes at 0
 * @width: the width of the string
 * @height: the height of the string
 * Return: a pointeron success or NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int **grid, i, j;

	if (height == 0 || width == 0)
	{
		return (NULL);
	}
	grid = malloc(height * sizeof(int));
	if (grid == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			while (i >= 0)
			{
				free(grid[i]);
				i--;
			}
			free(grid);

			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
