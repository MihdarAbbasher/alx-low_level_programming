#include <stdio.h>
#include "main.h"
/* betty style doc for function main goes there */
/**
* print_alphabet - print the alphabet
* Return: void
*/
void print_alphabet(void)
{
	int i;

	for (i = 0; i < 50; i++)
	{
		printf("%d: %c\n", i, i);
	}
	printf("\n");
}

int main(void)
{
print_alphabet();
}
