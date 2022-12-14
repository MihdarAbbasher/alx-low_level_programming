#include <stdio.h>
#include "main.h"
/* betty style doc for function main goes there */
/**
* print_times_table - print the alphabet
* @n: int value
* Return: void
*/
void print_times_table(int n)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
