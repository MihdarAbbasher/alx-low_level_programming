#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;
	
	if argc != 3)
	{
		printf("Error\n");
	}
	else
	{
		i = argv[1] * argv[2];
		printf("%d\n", i);
	}    	
	return (0);
}
