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
	int i, j, k;

	for (i = 48; i < 56; i++)
	{
		for (j = i + 1; j < 57; j++)
		{
			for (k = j + 1; k < 58; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i != 55)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
