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
ZZ* Return: char *
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, sd, ss;

	ss = _strlen(src);
	sd = _strlen(dest);
	for (i = 0; i < sd; i++)
	{
		*(src + ss + i) = *(dest + i);
	}
	return (src);
}


