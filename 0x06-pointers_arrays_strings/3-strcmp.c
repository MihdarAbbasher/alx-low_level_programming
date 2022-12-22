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
* _strcmp - cmp str
* @dest: dest str
* @src: src str
* Return: char *
*/

int _strcmp(char *dest, char *src)
{
	int i, ss, sd, res;
	
	res = 0;
	ss = _strlen(src);
	sd = _strlen(dest);

	for (i = 0; i < ss && i < sd; i++)
	{
		res = dest[i] - src[i];
		if (res != 0)
			break;
	}
	return (res);
}


