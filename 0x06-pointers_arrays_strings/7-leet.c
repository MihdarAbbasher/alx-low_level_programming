#include <stdio.h>
#include "main.h"
/* betty style doc for function main goes there */
/**
* leet - uppercase word
* @txt: dest str
* Return: char
*/

char *leet(char *txt)
{
	int i, j;

	char vl[] = "a4A4e3E3o0O0t7T7l1L1";

	i = 0;
	while (txt[i] != '\0')
	{
		j = 0;
		while (vl[j] != '\0')
		{
			if (txt[i] == vl[j])
			{
				txt[i] = vl[j + 1];
				break;
			}
		j += 2;
		}
	i++;
	}
	return (txt);
}
