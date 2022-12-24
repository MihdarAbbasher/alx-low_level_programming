#include <stdio.h>
#include "main.h"

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

int main(void)
{
    char s1[98];
    char *ptr;

    ptr = _strcpy(s1, "First, solve the problem. Then, write the code\n");
    printf("%s", s1);
    printf("%s", ptr);
    return (0);
}
