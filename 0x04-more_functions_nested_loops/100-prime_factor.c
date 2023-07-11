#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <limits.h>
#include <math.h>

/* betty style doc for function main goes there */
/**
* main - print last digit
* Return: void
*/

int main(void)
{

	long int number = 612852475143;
	int i, max;

	while (number % 2 == 0)
	{
		max = 2;
		number = number / 2;
	}
	for (i = 3; i <= sqrt(612852475143); i = i + 2)
	{
		while (number % i == 0)
		{
			max = i;
			number = number / i;
		}
	}
	printf("%d\n", max);
	return (0);
}

