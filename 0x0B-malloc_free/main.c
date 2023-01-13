#include "main.h"
#include <stdio.h>
#include <stdlib.h>


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


/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{

  char *s;

	s = _strdup("");
	if (s == NULL)
	{
		printf("failed to allocate memory\n");
		return (1);
	}
	free(s);
	return (0);

}


