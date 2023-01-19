#include <stdio.h>
#include "stdarg.h"

/**
* sum_them_all - check the code
* @n: int
* Return: Always int.
*/
int sum_them_all(const unsigned int n, ...)
{
	int res;
	va_list ap;
	unsigned int i;

	res = 0;
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		res += va_arg(ap, int);
	}
	va_end(ap);
	return (res);
}
