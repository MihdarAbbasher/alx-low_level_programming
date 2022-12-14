#include <stdio.h>
#include "main.h"
/* betty style doc for function main goes there */
/**
* _abs - check if alphabet
* @c: parameter to check
* Return: 0 or 1
*/
int _abs(int c)
{
	int r;

	if (c  < 0)
	{
		r = -1 * c;
	}
	else
	{
		r = c;
	}
	return (r);
}
