#include <stdio.h>
#include "main.h"
/* betty style doc for function main goes there */
/**
* print_alphabet - print the alphabet
* Return: void
*/
void main(void)
{
	int i, a, res;

	res = 0;
	for (i = 1; i < 11; i++)
	{
		printf("2 x %d = \n", i);
		printf("\n");
		scanf("%d", &a);
		if (a == (2 * i))
		{
			res++;
			printf(" الاجابة صحيحة\n");
		}
		else
		{
			printf("X الاجابة خطأ\n");
		}
	}
	printf("درجتك هي \n %d\n", res);
}
