#include <stdio.h>
#include "main.h"
/* betty style doc for function main goes there */
/**
* getmin2 - get minutes 2
* @m int min
* Return: int minutes
*/

int getmin2 (int m)
{
	int m2;
        
	if (m < 10)
	{
		m2 = 0;
	}
	else if (m < 20)
	{
		m2 = 1;
	}
	else if (m < 30)
	{
		m2 = 2;
	}
	else if (m < 40)
	{
		m2 = 3;
	}
	else if (m < 50)
	{
		m2 = 4;
	}
	else if (m < 60)
	{
		m2 = 5;
	}
	return (m2);
}

/**
* jack_bauer  - print the hours and minutes
* Return: void
*/
void jack_bauer(void)
{
	int h, m, h1, h2, m1, m2;

	for (h = 0; h < 24; h++)
	{
		h2 = h % 10;
		if (h < 10)
		{
			h1 = 0;
		}
		else if (h < 20)
		{
			h1 = 1;
		}
		else
		{
			h1 = 2;
		}
		for (m = 0; m < 60; m++)
		{
			m1 = m % 10;
			m2 = getmin2(m);
			_putchar(h1 + '0');
			_putchar(h2 + '0');
			_putchar(':');
			_putchar(m2 + '0');
			_putchar(m1 + '0');
			_putchar('\n');
		}
	}
}
