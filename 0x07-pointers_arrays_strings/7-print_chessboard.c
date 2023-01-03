#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - check the code
 * @a: array
 * Return: nothing
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; *(a + j) != '\0'; j++)
		{
			_putchar(a[i][j]);
			if (j == 7)
			{
				_putchar('\n');
				break;
			}
		}
	}
}
