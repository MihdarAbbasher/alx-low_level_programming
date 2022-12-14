#include <stdio.h>
#include "main.h"
/* betty style doc for function main goes there */
/**
* main - print the alphabet
* Return: void
*/
int main(void)
{
	long a, b, tmp;

	a = 1;
	b = 2;
	printf("%ld, %ld, ", a, b);
	while (b <= 4000000)
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
