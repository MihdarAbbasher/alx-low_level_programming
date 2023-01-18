#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - check the code
 * @nmemb: arg count
 * @size: arg count 
 * Return: Always ptr or null.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int *p;
	unsigned int i;

	if (size * nmemb == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	p = ptr;
	if (ptr != NULL)
	{
		for (i = 0; i < nmemb * size; i++)
		{
			*(p + i) = 0;
		}
		return (ptr);
	}
	printf("out");
	return (NULL);
}
