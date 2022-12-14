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
	printf("%0f, %0f, ", a, b);
	for (i = 1; i < 96; i++)
	{
		tmp = a + b;
		a = b;
		b = tmp;
		printf("%0f, ", b);
	}
	tmp = a + b;
	printf("%0f\n", tmp);
	return (0);
}
