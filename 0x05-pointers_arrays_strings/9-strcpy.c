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
	int i, ls, ld;

	ld = _size(dest);
	ls = _size(src);
	for (i = 0; i < ls; i++)
	{
		dest[i + ld] = src[i];
	}
	dest[i + 1] = '\0';
	return (dest);
}
