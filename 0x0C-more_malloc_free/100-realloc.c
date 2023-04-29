#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - check the code
 * @ptr: arg count
 * @old_size: arg count
 * @new_size: arg count
 * Return: Always ptr or null.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *nptr;
	char *p, *pp;
	unsigned int i;

	if (old_size == new_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		nptr = malloc(new_size);
		free(ptr);
		return (nptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	nptr = malloc(new_size);
	p = nptr;
	pp = ptr;
	for (i = 0; i < new_size && i < old_size; i++)
	{
		*(p + i) = *(pp + i);
	}
	free(ptr);
	return (nptr);
}

