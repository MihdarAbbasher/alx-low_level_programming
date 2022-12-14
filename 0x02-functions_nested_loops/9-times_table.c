#include <stdio.h>
#include "main.h"
/* betty style doc for function main goes there */
/**
* times_table - print the time table 
* Return: void
*/
void times_table(void)
{
	int i, j, div, mod, res;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			res = i * j;
			div = res / 10;
			mod = res % 10;
			if (div > 0)
			{
				_putchar(div + '0');
			}
			_putchar(mod + '0');
			_putchar(' ');
			_putchar(' ');
			if (j != 9)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
