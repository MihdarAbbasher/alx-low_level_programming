#include <stdio.h>
#include "stdarg.h"

/**
* print_strings - check the code
* @n: int
* @separator: *char
* Return: Always int.
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	void *vp;
	char *cp;

	if (n > 0)
	{
		va_start(ap, n);
		for (i = 0; i < n; i++)
		{

			vp = va_arg(ap, int*);
			cp = vp;
			if (*cp == '\0')
			{
				cp = "(nil)";
			}
			printf("%s", cp);
			if ((i < n - 1) && (separator != NULL))
			{
				printf("%s", separator);
			}
		}
		va_end(ap);
		printf("\n");
	}
	else
	{
		printf("\n");
	}
}
