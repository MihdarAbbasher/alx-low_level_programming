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
 * str_concat - check the code
 * @s1: str
 * @s2: str
 * Return: Always ptr or null.
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i, j, l, l1, l2;

	if (s1 == NULL)
	{
		l1 = 0;
	}
	else
	{
		l1 = _strlen(s1);
	}
	if (s2 == NULL)
	{
		l2 = 0;
	}
	else
	{
		l2 = _strlen(s2);
	}
	l = l1 + l2;
	ptr = (char *) malloc(sizeof(char) * l + 2);
	if (ptr != NULL)
	{
		for (i = 0; i < l1; i++)
		{
			*(ptr + i) = *(s1 + i);
		}
		if (l1 > 0)
		{
			*(ptr + i) = '\n';
			j = 1;
		}
		for (i = 0; i < l2; i++)
		{
			*(ptr + l1 + i + j) = *(s2 + i);
		}
		*(ptr + l1 + i + j) = '\0';
	}

	return (ptr);
}

/**
 * argstostr - check the code
 * @ac: str
 * @av: str
 * Return: Always ptr or null.
 */


char *argstostr(int ac, char **av)
{
	int i, l;
	char *p;

	if (ac > 0)
	{
		p = "";
		for (i = 0; i < ac; i++)
		{
			p = str_concat(p, av[i]);
		}
		l = _strlen(p);
		*(p + l) = '\n';
		return (p);
	}
	else
	{
		return (NULL);
	}
}

