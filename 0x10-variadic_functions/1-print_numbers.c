#include <stdio.h>
#include "stdarg.h"

/**
* print_numbers - check the code
* @n: int
* @separator: *char
* Return: Always int.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if ((i < n - 1) && (separator != NULL))
		{
			printf("%s", separator);
		}
	}
	va_end(ap);
	printf("\n");
}
