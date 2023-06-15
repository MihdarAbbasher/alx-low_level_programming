#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - check the code
 * @b: arg count
 * Return: Always ptr or null.
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr != NULL)
	{
		return (ptr);
	}
	exit(98);
}
