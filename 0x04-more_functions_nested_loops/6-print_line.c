#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <limits.h>

/* betty style doc for function main goes there */
/**
* print_line - print last digit
* Return: void
*/

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
