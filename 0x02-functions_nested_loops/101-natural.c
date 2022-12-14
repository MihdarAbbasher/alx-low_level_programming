#include <stdio.h>
#include "main.h"
/* betty style doc for function main goes there */
/**
* print_alphabet - print the alphabet
* Return: void
*/
void print_alphabet(void)
{
	int i, s;

	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			s = s + i;
		}
	}
	printf("%d\n", s);
}
