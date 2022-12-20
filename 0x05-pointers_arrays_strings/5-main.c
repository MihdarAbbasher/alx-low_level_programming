#include "main.h"
#include <stdio.h>

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
     char s[10] = "My School";

    printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);
    return (0);
}
