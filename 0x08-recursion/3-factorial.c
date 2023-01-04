#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - print the code
 * @n: number
 * Return: int fact
 */
int factorial(int n);
{
	if (n == 0)
	{
		return(0);
	}
	else if (n < 0)
	{
		return(-1);
	}
	else
	{
		return(n * factorial(n - 1));	
	}
}
