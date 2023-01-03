#include "main.h"
#include <stdio.h>

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
 * isExist - check the code
 * @s: array
 * @start: start
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
