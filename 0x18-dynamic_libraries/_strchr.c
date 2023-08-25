#include "main.h"

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
			break;
		}
	}
	return (ptr);
}

