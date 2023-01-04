#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - print the code
 * @s: array
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	char c;

	c = *s;
	if (!s)
	{
		return;
	}
	else
	{
		_puts_recursion(s + 1);
	}
}
