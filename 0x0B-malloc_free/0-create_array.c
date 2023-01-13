#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - check the code
 * @size: arg count
 * @c: arg vector
 * Return: Always ptr or null.
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;

	ptr = malloc(sizeof(c) * size);
	return (ptr);
}
