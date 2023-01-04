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
 * print_chessboard - check the code
 * @a: array
 * Return: nothing
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
			if (j == 7)
			{
				_putchar('\n');
			}
		}
	}
}
