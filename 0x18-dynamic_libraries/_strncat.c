#include "main.h"

/**
* _strncat - concatenate str
* @dest: dest str
* @src: src str
* @n: cp len
* Return: char *
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, sd, ss;
	char dc;

	ss = _strlen(src);
	sd = _strlen(dest);
	for (i = 0; i < n && i < ss; i++)
	{
		dc = *(src + i);
		*(dest + sd + i) = dc;
	}
	return (dest);
}

