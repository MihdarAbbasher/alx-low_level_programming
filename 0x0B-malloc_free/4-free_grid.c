#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - check the code
 * @height: arg vector
  * @grid: arg vector
 * Return: Always ptr or null.
 */

void free_grid(int **grid, int height)
{
	int i;

	if (height > 0)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
	}
}
