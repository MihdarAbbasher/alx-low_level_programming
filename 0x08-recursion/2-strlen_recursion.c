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
		return (1 + _strlen_recursion(s +1));
	}
}
