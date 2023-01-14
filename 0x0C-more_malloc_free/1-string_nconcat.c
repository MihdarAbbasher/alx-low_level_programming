#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen(char *s)- check the co
 * @s: char pointer
 * Return: int len
*/
int _strlen(char *s)
{
	int i = 0;

	while (1 == 1)
	{
		if (*(s + i) != '\0')
		{
			i += 1;
		}
		else
		{
			break;
		}
	}
	return (i);
}


/**
 * string_nconcat - check the code
 * @s1: arg count
 * @s2: arg count
 * @n: arg count
 * Return: Always ptr or null.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int l1, l2, i;

	l1 = _strlen(s1);
	l2 = _strlen(s2);
	if (n > l2)
	{
		n = l2;
	}
	ptr = malloc((l1 + n + 1) * sizeof(char));
	if (ptr != NULL)
	{
		for (i = 0; i < l1; i++)
		{
			*(ptr + i) = *(s1 + i);
		}
		for (; i < l1 + n; i++)
		{
			*(ptr + i) = *(s2 + i - l1);
		}
		*(ptr + i) = '\0';
		return (ptr);
	}
	return (NULL);
}
