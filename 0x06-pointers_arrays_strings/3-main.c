#include "main.h"
#include <stdio.h>
/*/ Hello 
//World!
//ello World!
//Hello World!
//Hello*/
int fn(char *s)
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
        return i;
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
   char s1[] = "Hello";
    char s2[] = "World!";

    printf("%d\n", _strcmp(s1, s2));
    printf("%d\n", _strcmp(s2, s1));
    printf("%d\n", _strcmp(s1, s1));
    return (0);
}
