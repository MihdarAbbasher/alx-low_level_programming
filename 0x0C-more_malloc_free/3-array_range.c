#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - check the code
 * @min: arg min
 * @max: arg max
 * Return: Always ptr or null.
 */

int *array_range(int min, int max)
{
	int *ptr, i;

	if (min > max)
	{
		return (NULL);
	}
	ptr = malloc((max - min + 1) * sizeof(int));
	if (ptr != NULL)
	{
		for (i = min; i <= max; i++)
		{
			*(ptr + i - min) = i;
		}
	}
	return (ptr);
}
