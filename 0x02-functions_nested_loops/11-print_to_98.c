#include <stdio.h>
#include "main.h"
/* betty style doc for function main goes there */
/**
* void print_to_98 - print theto 98
* @n: int start value
* Return: void
*/
void print_to_98(int n)
{
	int i;

	i = 1;
	if (n > 98)
	{
		i = -1;
	}
	while (n != 98)
	{
		printf("%d, ", n);
		n = n + i;
	}
	printf("%d\n", n);
}
