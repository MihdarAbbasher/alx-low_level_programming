#include <stdio.h>
#include "main.h"
/* betty style doc for function main goes there */
/**
* main - print the alphabet
* Return: void
*/
int main(void)
{
	int i, a, b, tmp;

	a = 1;
	b = 2;
	printf("%d, %d, ", a, b)
	for (i = 1; i < 48; i++)
	{
		tmp = a + b;
		a = b;
		b = tmp;
		printf("%d, ", b);
	}
	tmp = a + b;
	printf("%d", tmp);
	return (0);
}
