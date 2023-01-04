#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - print the len
 * @s: array
 * Return: nothing
 */
int _strlen_recursion(char *s)
{
	char c;

	c = *s;
	if (c == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}

/**
 * _print_rev_recursion - print the code
 * @s: array
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	char c;
	int l;
	char *p;

	l = _strlen_recursion(s);
	p = s;
	c = s[l - 1];
	if (c == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(c);
		*(p + l - 1) = "\0";
		
	}
}
