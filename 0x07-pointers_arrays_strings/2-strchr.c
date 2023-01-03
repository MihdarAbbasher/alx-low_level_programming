#include "main.h"
#include <stdio.h>

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
 * _strchr - check the code
 * @s: array
 * @b: char to be written
 * Return: address
 */
char *_strchr(char *s, char b)
{
	int i, l;
	char *ptr;

	l = _strlen(s);
	ptr = NULL;
	for (i = 0; i < l; i++)
	{
		if (s[i] == b)
		{
			ptr = s + i;
			return (ptr);
		}
	}
	return (ptr);
}

