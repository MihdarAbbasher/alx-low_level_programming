#include "main.h"
#include <stdio.h>
/**
 * _memcpy - check the code
 * @s: array
 * @b: char to be written
 * @n: no of items
 * Return: address
 */
char *_memcpy(char *s, char *b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		b[i] = s[i];
	}
	return (s);
}

