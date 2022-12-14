#include <stdio.h>
#include "main.h"
/* betty style doc for function main goes there */
/**
* print_last_digit - print last digit
* @c: parameter to check
* Return: last digit value
*/
int print_last_digit(int c)
{
	int r;

	r = c % 10;
	if (r < 0)
	{
		r = r * -1;
	}
	_putchar('0' + r);
	return (r);
}
