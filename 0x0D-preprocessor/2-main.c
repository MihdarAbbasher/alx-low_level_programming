#include <stdlib.h>

/**
* main - print the file name
* Return: 0
*/
int main(void)
{
	char *s;
	int i, l;

	s = __FILE__;
	l = _strlen(s);
	printf("%s\n", s);
	return (0);
}
