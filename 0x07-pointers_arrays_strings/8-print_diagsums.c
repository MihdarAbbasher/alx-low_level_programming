#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - check the code
 * @a: the address of memory to print
 * @size: the size of the memory to print
  
 * Return: Always nothing.
 */
 
void print_diagsums(int *a, int size)
{
        int i, sum;

        for (i = 0; i < size; i++)
        {
                sum += a[i * size + i];
        }
        printf("%d, ", sum);
        sum = 0;
        for (i = 0; i < size; i++)
        {
                sum += a[i * size + size - i - 1];               
        }
	printf("%d\n", sum);
}


