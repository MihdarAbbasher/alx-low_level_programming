#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 * @argc: arg count
 * @argv: arg vector
 * Return: Always 0.
 */
 
int main(int argc, char *argv[])
{
	int i;

	printf("%s\n", argv[0]);
	for (i = 1; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
