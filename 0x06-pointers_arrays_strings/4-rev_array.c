#include <stdio.h>
#include "main.h"
/* betty style doc for function main goes there */
/**
* reverse_array - concatenate str
* @dest: dest str
* @n: cp len
* Return: char *
*/
void reverse_array(int *dest, int n)
{
	int i, ss, dc;

	ss = n / 2;
	for (i = 0; i < ss; i++)
	{
		dc = dest[n - i - 1];
		dest[n - 1 - i] = dest[i];
		dest[i] = dc;
	}
}

