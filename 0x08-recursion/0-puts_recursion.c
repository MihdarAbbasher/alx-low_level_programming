#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - print the code
 * @s: array
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	char c;	

	c = *s;
	if (*(s + 1) != '\0')
	{
		_putchar(c);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar(c);
		_putchar('\n');		
		return;
	}
}