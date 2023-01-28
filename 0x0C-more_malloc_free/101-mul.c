#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * main - check the code
 * @argc: arg count
 * @argv: arg vector
 * Return: Always 0.
 */

unsigned int main(int argc, char *argv[])
{
	int i;
	unsigned int res, *n, *m;
	char *s;
	
	s  = "Error\n";
	if (argc != 3)
	{
		for (i = 0; i < 6; i++)
		{
			_putchar(s[i]);
		}
		exit(98);
	}
	m = argv[1];
	n = argv[2];
	res = (*n) * (*m);
	printf("res: %ud", res);
	return (res);
}

