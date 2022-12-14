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

	if (c  < 0)
	{
		r = -1 * c;
	}
	else
	{
		r = c;
	}
	return (r % 10);
}
