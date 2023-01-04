#include "main.h"
#include <stdio.h>



/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{


   _print_rev_recursion("\nColton Walker");
    return (0);
    
    /*
    
    char *s = "hello, world";
    char *f = "world";
    char *t;

	t = _strstr(s, f);
   printf("t: %s\n", t);
    return (0);
    */
}


/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
 
void simple_print_buffer(char *buffer, unsigned int size)
{
        unsigned int i;

        i = 0;
        while (i < size)
        {
                if (i % 10)
                {
                        printf(" ");
                }
                if (!(i % 10) && i)
                {
                        printf("\n");
                }
                printf("0x%02x", buffer[i]);
                i++;
        }
        printf("\n");
}


