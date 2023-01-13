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
 * _strdup - check the code
 * @str: str
 * Return: Always ptr or null.
 */

char *_strdup(char *str)
{
	char *ptr;
	int i, j;

	if (str == NULL)
	{
		return (str);
	}
	
	else
	{
		j = _strlen(str);
		ptr = malloc(j * 2 + 1);
		if (ptr != NULL)
		{
			for (i = 0; i <= j; i++)
			{
				*(ptr + i) = *(str + i);
			}
		}
	}
	return (ptr);
}
