#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <limits.h>

/* betty style doc for function main goes there */
/**
* print_diagonal - print last digit
* @n: length of line
* Return: void
*/

void print_diagonal(int n)
{
	int i, s;

	for (i = 0; i < n; i++)
	{
		s = i;
		for (j = 0; j < s; j++)
		{
			_putchar(' ');
		}
	_putchar('\\');			
	_putchar('\n');
	}
	if (n < 1)
	{
		_putchar('\n\);
	}
}
