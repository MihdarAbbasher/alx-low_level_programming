#include <stdio.h>
#include "main.h"
/* betty style doc for function main goes there */
/**
* main - print the alphabet
* Return: void
*/
int main(void)
{
	long a, b, tmp, s;

	a = 1;
	b = 2;
	s = 3;
	while (b <= 4000000)
	{
		tmp = a + b;
		a = b;
		b = tmp;
		if (b % 2 == 0)
		{
			s = s + b;
		}
	}
	printf("%ld\n", s);
	return (0);
}
