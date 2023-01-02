#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - check the code
 * @s: array
 * @accept: char to be written
 * Return: address
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *res;

	res = 0;
	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				res = s + i;
				return (res);
			}
		}
	}
	return (res);
}
