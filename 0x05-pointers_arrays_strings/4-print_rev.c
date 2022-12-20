#include "main.h"
/**
 * print_rev - check the co
 * @s: char pointer
 * Return: int len
*/
void print_rev(char *s)
{
	int i = 0;
	char c;

	while (1 == 1)
	{
		c = *(s + i);
		if (c != '\0')
		{
			i += 1;
		}
		else
		{
			break;
		}
	}
	while (i >= 0)
	{
		c = *(s + i);
		_putchar(c);
		i--;
	}
	_putchar('\n');
}
