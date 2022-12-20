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
     char *str;

    str = "0123456789";
    puts_half(str);
    return (0);
}
