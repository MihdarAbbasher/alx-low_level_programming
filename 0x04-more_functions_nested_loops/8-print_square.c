#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <limits.h>

/* betty style doc for function main goes there */
/**
* print_square - print last digit
* @size: length of line
* Return: void
*/

void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size < 1)
	{
		_putchar('\n');
	}
}
