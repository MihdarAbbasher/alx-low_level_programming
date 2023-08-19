#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int find_strlen(char *s);
int check_palindrome(char *s, int len, int index);
int is_palindrome(char *s);
int max_palind();


/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	int n;
	n = max_palind();
	printf("max: %d\n", n);
	

    return (0);
}
