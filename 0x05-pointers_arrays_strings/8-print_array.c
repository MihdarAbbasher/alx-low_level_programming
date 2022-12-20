#include "main.h"
#include <stdio.h>
/**
 * print_array - check the co
 * @s: char pointer
 * @n: int len
*/
void print_array(int *s, int n)
{
	int i = 0;
	int c;

	for (i = 0; i < n; i++)
	{
		c = *(s + i);
		printf("%d", c);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
