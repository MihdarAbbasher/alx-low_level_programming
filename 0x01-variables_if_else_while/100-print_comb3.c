#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* betty style doc for function main goes there */
/**
* main - print digits
* Return: 0
*/
int main(void)
{
	int i, j;

	for (i = 48; i < 58; i++)
	{
		for (j = i + 1; j < 58; j++)
		{
			putchar(i);
			putchar(j);
			if (i != 56)
			{	putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
