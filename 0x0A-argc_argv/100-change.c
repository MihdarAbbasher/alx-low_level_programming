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
	int a, res;
	char *s;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		res = 0;
		s = argv[1];
		a = atoi(s);
		if (a < 0)
		{
			printf("0\n");
			return (0);
		}
		if (a >= 25)
		{
			res += a / 25;
			a = a % 25;
		}
		if (a >= 10)
		{
			res += a / 10;
			a = a % 10;
		}
		if (a >= 5)
		{
			res += a / 5;
			a = a % 5;
		}
		if (a >= 2)
		{
			res += a / 2;
			a = a % 2;
		}
		res += a;
		printf("%d\n", res);
	}
	return (0);
}
