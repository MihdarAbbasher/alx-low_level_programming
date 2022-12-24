#include <stdio.h>
#include "main.h"
/* betty style doc for function main goes there */
/**
 * _strlenn(char *s)- check the co
 * @s: char pointer
 * Return: int len
*/
int _strlenn(char *s)
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
* rev_string - concatenate str
* @dest: dest str
* Return: char *
*/
void rev_string(char *dest)
{
	int i, ss, dc, n;

	n = _strlenn(dest);
	ss = n / 2;
	for (i = 0; i < ss; i++)
	{
		dc = dest[n - i - 1];
		dest[n - 1 - i] = dest[i];
		dest[i] = dc;
	}
}

