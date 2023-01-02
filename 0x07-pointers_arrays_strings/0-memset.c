#include "main.h"
#include <stdio.h>
/**
 * _memset - check the code
 * @s: array
 * @b: char to be written
 * @n: no of items
 * Return: address
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

