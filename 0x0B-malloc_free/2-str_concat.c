#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - check the code
 * @s1: str
 * @s1: str
 * Return: Always ptr or null.
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i, j;

	j = _strlen(str);
	ptr = malloc(sizeof(str) * j * 2);
	if (ptr != NULL)
	{
		for (i = 0; i <= j; i++)
		{
			*(ptr + i) = *(str + i);
		}
	}
	if (j == 0)
	{
		ptr = NULL;
	}
	return (ptr);
}
