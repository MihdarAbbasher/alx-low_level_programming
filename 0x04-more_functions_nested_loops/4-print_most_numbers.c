#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <limits.h>

/* betty style doc for function main goes there */
/**
* print_most_numbers - print last digit
* Return: void
*/

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}
