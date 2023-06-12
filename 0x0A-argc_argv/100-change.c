#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int get_res(int a);
/**
 * main - check the code
 * @argc: arg count
 * @argv: arg vector
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int res, a;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		a = atoi(argv[1]);
		res = get_res(a);
		printf("%d\n", res);
	}
	return (0);
}

/**
 * get_res - check the cents
 * @a: num
 * Return: res.
 */

int get_res(int a)
{
	int res;


	res = 0;
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
	return (res);
}

