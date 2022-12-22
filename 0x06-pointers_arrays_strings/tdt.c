#include <stdio.h>
#include "main.h"
/* betty style doc for function main goes there */
/**
* print_alphabet - print the alphabet
* Return: void
*/
void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
