#include <stdio.h>
#include "main.h"
/* betty style doc for function main goes there */
/**
* rot13 - uppercase word
* @txt: dest str
* Return: char
*/

char *rot13(char *txt)
{
	int i, j, rot;

	char vl[] = `abcdefghijklmnopqrstuvwxyzabcdefghijklmABCDEFGHIJKLMNOPQRSTUVWXY\
ZABCDEFGHIJKLM`;

	i = 0;
	while (txt[i] != '\0')
	{
		j = 0;
		while (j < 80 && txt[i])
		{
			if (txt[i] == vl[j])
			{
				rot = (j + 39) % 52;
				txt[i] = vl[rot];
				break;
			}
		j++;
		}
	i++;
	}
	return (txt);
}
