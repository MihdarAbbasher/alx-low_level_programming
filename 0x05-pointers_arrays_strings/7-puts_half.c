#include "main.h"
/**
 * puts_half - check the co
 * @s: char pointer
 * Return: int len
*/
void puts_half(char *s)
{
	int i = 0;
	char c;
	int l = 0;
	int start;
	int isodd = 0;

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
	l = i - 1;
	if (i % 2 == 1)
	{
		isodd = 1;
		start = l / 2;
	}
	else
	{
		start = i / 2;
	}
	i = 0;
	while (i < start)
	{
		c = *(s + start + isodd + i);
		_putchar(c);
		i++;
	}
	_putchar('\n');
}
