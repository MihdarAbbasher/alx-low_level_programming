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
	long a, b, tmp;

	a = 1;
	b = 2;
	printf("%ld, %ld, ", a, b);
	for (i = 1; i < 96; i++)
	{
		tmp = a + b;
		a = b;
		b = tmp;
		printf("%ld, ", b);
	}
	tmp = a + b;
	printf("%ld\n", tmp);
	return (0);
}
