#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - check the code
 * @argc: arg count
 * @argv: arg vector
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i, a, sum;
	char *s;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		sum = 0;
		for (i = 1; i < argc; i++)
		{
			s = argv[i];
			a = atoi(s);
			if (a == 0)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += a;
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
