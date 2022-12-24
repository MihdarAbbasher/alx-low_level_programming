#include <stdio.h>
#include "main.h"
/* betty style doc for function main goes there */
/**
* _strcpy - strcpy the str
* @dest: char pointer
* @src: char pointer
* Return: void
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return (dest);
}
