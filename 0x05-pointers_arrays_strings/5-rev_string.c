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
* reverse_array - concatenate str
* @dest: dest str
* @n: cp len
* Return: char *
*/
void rev_string(int *dest)
{
	int i, ss, dc, n;
	
	n = _strlen(dest);
	ss = n / 2;
	for (i = 0; i < ss; i++)
	{
		dc = dest[n - i - 1];
		dest[n - 1 - i] = dest[i];
		dest[i] = dc;
	}
}

