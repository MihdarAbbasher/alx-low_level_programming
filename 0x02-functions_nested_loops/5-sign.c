#include <stdio.h>
#include "main.h"
/* betty style doc for function main goes there */
/**
* print_sign - check if alphabet
* @n: parameter to check
* Return: 0, -1 or 1
*/
int print_sign(int c)
{
	int r;

	if (c > 0)
	{
		_putchar('+');
		r = 1;
	}
	else if (c == 0)
	{
		r = 0;
		_putchar('0');
	}
	else
	{
		r = -1;
		_putchar('-');
	}
	return (r);
}
