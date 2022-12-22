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
* string_toupper - concatenate str
* @ch: dest str
* Return: char *
*/
char *string_toupper(char *ch)
{
	int i,  ss;

	ss = _strlen(ch);
	for (i = 0; i < ss; i++)
	{
		if (ch[i] >= 'a' && ch[i] <= 'z')
			ch[i] -= 32;
	}
	return (ch);
}

