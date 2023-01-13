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
	char *ptr;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(int) * height * width);
	if (ptr != NULL)
	{
		for (i = 0; i < height; i++)
		{
			for (j = 0; j < width; j++)
			{
				*(ptr + i + j) = 0;
			}
		}
	}
	return (ptr);
}
