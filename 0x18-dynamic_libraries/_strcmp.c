#include "main.h"

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


