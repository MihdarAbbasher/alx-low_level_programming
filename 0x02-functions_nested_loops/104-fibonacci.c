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
	double a, b, tmp;

	a = 1;
	b = 2;
	printf("%f, %f, ", a, b);
	for (i = 1; i < 96; i++)
	{
		tmp = a + b;
		a = b;
		b = tmp;
		printf("%f, ", b);
	}
	tmp = a + b;
	printf("%f\n", tmp);
	return (0);
}
