#include <stdio.h>
#include "main.h"
/* betty style doc for function main goes there */
/**
* main - print the alphabet
* Return: void
*/
int main(void)
{
	int i;
	unsigned long a, b, tmp;

	a = 1;
	b = 2;
	printf("%lu, %lu, ", a, b);
	for (i = 1; i < 96; i++)
	{
		tmp = a + b;
		a = b;
		b = tmp;
		printf("i: %i, %lu, \n",i +2, b);
	}
	tmp = a + b;
	printf("%lu\n", tmp);
	return (0);
}
