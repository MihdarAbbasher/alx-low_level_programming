#include "main.h"
/**
 * rev_string - check the co
 * @s: char pointer
 * Return: int len
*/
void rev_string(char *s)
{
	int i = 0;
	char c;
	int l;
	char *tmp;

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
	while (i > 0)
	{
		c = *(s + i - 1);
		i--;
	}
	for (i = 0; i <= l; i++)
	{
		*(s + i) = *(tmp + i);
	}
}
