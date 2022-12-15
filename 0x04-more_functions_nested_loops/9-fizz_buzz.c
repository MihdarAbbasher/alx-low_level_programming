#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <limits.h>

/* betty style doc for function main goes there */
/**
* main - print fizz_buzz
* Return: always 0
*/

int main(void)
{
	int i;

	for (i = 1; i < 100; i++)
	{
		if (i % 15 == 0)
		{
			printf("%s ", "FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("%s ", "Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("%s ", "Buzz");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("%s\n", "Buzz");
	return (0);
}
