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

	while (1 == 1)
	{
		c = *(s + i);
		if (c != '\0')
		{
			if (i % 2 == 0)
			{
				_putchar(c);
			}
			i += 1;
		}
		else
		{
			break;
		}
	}
	_putchar('\n');
}
