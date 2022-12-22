#include <stdio.h>
#include "main.h"
/* betty style doc for function main goes there */
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
* _strncat - concatenate str
* @dest: dest str
* @src: src str
* @n: cp len
* Return: char *
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, sd;
	char dc;

	sd = _strlen(dest);
	for (i = 0; i < n; i++)
	{
		dc = *(src + i);
		*(dest + sd + i) = dc;
	}
	*(dest + i) = '\0';
	return (dest);
}

