#include <stdio.h>
#include "main.h"
/* betty style doc for function main goes there */
/**
 * _size - check the co
 * @s: char pointer
 * Return: int len
*/
int _size(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
* _strcpy - strcpy the str
* @dest: char pointer
* @src: char pointer
* Return: void
*/
char *_strcpy(char *dest, char *src)
{
	int i, ls;

	ls = _size(src);
	for (i = 0; i < ls && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return (dest);
}
