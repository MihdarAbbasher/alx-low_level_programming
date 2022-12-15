#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <limits.h>

/* betty style doc for function main goes there */
/**
* print_triangle - print last digit
* @size: length of line
* Return: void
*/

void print_triangle(int size)
{
	int i, j, s, h;

	s = size - 1;
	for (i = 0; i < size; i++)
	{
		s = size - i - 1;
		for (j = 0; j < s; j++)
		{
			_putchar(' ');
		}
		h = size - s;
		for (j = 0; j < h; j++)
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
