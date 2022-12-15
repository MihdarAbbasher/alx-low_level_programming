#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <limits.h>

/* betty style doc for function main goes there */
/**
* more_numbers - print last digit
* Return: void
*/

void more_numbers(void)
{
	int i, j, k;

	k = 1;
	for (i = 0; i < 15; i++)
	{
		j = i % 10;
		if (i > 9)
		{
			_putchar(k + '0');
		}
		_putchar(j + '0');
	}
	_putchar('\n');
}
