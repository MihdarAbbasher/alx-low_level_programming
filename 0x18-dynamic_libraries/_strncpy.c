#include "main.h"

/**
* _strncpy - copy str
* @dest: dest str
* @src: src str
* @n: str len
* Return: char *
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}


