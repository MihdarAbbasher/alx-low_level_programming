#include "main.h"
#include <stdio.h>
/**
 * _strspn - check the code
 * @s: array
 * @accept: char to be written
 * Return: address
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int res;

	res = 0;
	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				res += 1;
				break;
			}
			else
			{
				if (*(accept + j + 1) == '\0')
				{
					return (res);
				}
			}
		}
	}
	return (res);
}

