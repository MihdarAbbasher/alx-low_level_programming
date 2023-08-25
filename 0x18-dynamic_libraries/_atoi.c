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
    int a;
    int b;

    a = fn("ab s!");
    b = fn("");
    printf("a=%d, b=%d\n", a, b);
    return (0);
}
