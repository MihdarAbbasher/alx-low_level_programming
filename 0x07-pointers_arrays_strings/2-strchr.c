#include "main.h"
#include <stdio.h>
/**
 * _strchr - check the code
 * @s: array
 * @b: char to be written
 * Return: address
 */
char *_strchr(char *s, char b)
{
	char i;
	char *ptr;

	ptr = NULL;
	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == b)
		{
			ptr = s + i;
			break;
		}
	}
	return (ptr);
}

