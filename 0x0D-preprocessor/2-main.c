#include <stdio.h>

/* betty style doc for function main goes there */
/**
* main - print the file name
* Return: 0
*/
int main(void)
{
	char *s;

	s = __FILE__;
	printf("%s\n", s);
	return (0);
}
