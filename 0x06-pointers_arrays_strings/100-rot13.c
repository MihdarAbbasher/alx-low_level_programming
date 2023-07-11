#include <stdio.h>
#include "main.h"
/* betty style doc for function main goes there */
/**
* rot13 - uppercase word
* @p: dest str
* Return: char
*/

char *rot13(char *p)
{
	char *rot, *rotvalue1, *rotvalue2;
	int j = 0;

	rot = p;
	rotvalue1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	rotvalue2 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (*rot)
	{
		for (j = 0; rotvalue1[j]; j++)
		{
			if (*rot == rotvalue1[j])
			{
				*rot = rotvalue2[j];
				break;
			}
		}
		rot++;
	}
	return (p);
}
