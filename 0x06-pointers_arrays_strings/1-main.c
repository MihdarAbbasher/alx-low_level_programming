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
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    printf("%s\n", s1);
    printf("%s", s2);
    ptr = _strncat(s1, s2, 1);
    printf("%s\n", s1);
    printf("%s", s2);
    printf("%s\n", ptr);
    ptr = _strncat(s1, s2, 1024);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);
    return (0);
}
