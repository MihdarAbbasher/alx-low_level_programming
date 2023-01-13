#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - check the code
 * @width: arg count
 * @height: arg vector
 * Return: Always ptr or null.
 */

int **alloc_grid(int width, int height)
{
	int** arr;
	int i, j;


	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	arr = (int**)malloc(height * sizeof(int*));
	for (i = 0; i < height; i++)
	{
		arr[i] = (int*)malloc(width * sizeof(int));
		if (arr[i] != NULL)
		{
			for (j = 0; j < width; j++)
			{
				arr[i][j] = 0;
			}
		}
	}
	return (arr);
}
