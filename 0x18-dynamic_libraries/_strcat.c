#include "main.h"

/**
* _strcat - concatenate str
* @dest: dest str
* @src: src str
* Return: char *
*/
char *_strcat(char *dest, char *src)
{
	int i, sd, ss;
	char dc;

	ss = _strlen(src);
	sd = _strlen(dest);
	for (i = 0; i < ss; i++)
	{
		dc = *(src + i);
		*(dest + sd + i) = dc;
	}
	return (dest);
}

