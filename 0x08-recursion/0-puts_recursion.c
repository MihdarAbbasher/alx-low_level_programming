#include "main.h"
#include <stdio.h>


/**
 * _strlen(char *s)- check the co
 * @s: char pointer
 * Return: int len
*/
int _strlen(char *s)
{
	int i = 0;

	while (1 == 1)
	{
		if (*(s + i) != '\0')
		{
			i += 1;
		}
		else
		{
			break;
		}
	}
	return (i);
}


/**
 * _puts_recursion - print the code
 * @s: array
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	char c;
	int l;

	l = _strlen(s);
	c = *s;
	if (l > 0)
	{
		_putchar(c);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
		return;
	}
}
