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
	int q, w, e, r;

	for (i = 0; i < 99; i++)
	{
		q = i / 10;
		w = i % 10;

		for (j = i + 1; j < 100; j++)
		{
			e = j / 10;
			r = j % 10;

			putchar(q + '0');
			putchar(w + '0');
			putchar(32);
			putchar(e + '0');
			putchar(r + '0');
			if (!(q == 9 && w == 8))
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
