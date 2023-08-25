#include "main.h"

/**
 * isExist - check the code
 * @s: array
 * @start: start
 * @l: length
 * @accept: char to be written
 * Return: 0 or 1
 */
int isExist(char *s, char *accept, int start, int l)
{
	int i, res;

	res = 1;
	for (i = 0; i < l; i++)
	{
		if (s[start + i] != accept[i])
		{
			res = 0;
			break;
		}
	}
	return (res);
}

/**
 * _strstr - check the code
 * @haystack: array
 * @needle: char to be written
 * Return: address
 */
char *_strstr(char *haystack, char *needle)
{
	int i, found, l, lh;
	char *res;

	res = NULL;
	l = _strlen(needle);
	lh = _strlen(haystack);
	found = 0;
	for (i = 0; i <= lh - l; i++)
	{
		found = isExist(haystack, needle, i, l);

		if (found == 1)
		{
			res = haystack + i;
			break;
		}
	}
	return (res);
}
