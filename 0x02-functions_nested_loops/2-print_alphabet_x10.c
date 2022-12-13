#include <stdio.h>
#include "main.h"
/* betty style doc for function main goes there */
/**
* print_alphabet_x10 - print the alphabet
* Return: void
*/
void print_alphabet_x10(void)
{
	int i;
	int j = 0;

	while (j < 10)
	{
		for (i = 97; i < 123; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
		j++;	
	}
}
