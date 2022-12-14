#include <stdio.h>
#include "main.h"
/* betty style doc for function main goes there */
/**
* print_alphabet - check if alphabet
* Return: 0 or 1 
*/
int _islower(int c);
{
	int r;

	if (c >= 'a' && c <= 'z')
	{
		r = 1;
	}
	else
	{
		r = 0;
	}
	return r;	
}
