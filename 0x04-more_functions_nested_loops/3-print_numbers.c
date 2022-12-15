#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <limits.h>

/* betty style doc for function main goes there */
/**
* print_numbers - print last digit
* Return: void
*/

void print_numbers(void)
{
        int i;

        for (i = 0; i < 10; i++)
        {
                _putchar(i + '0');
        }
        _putchar('\n');
}
