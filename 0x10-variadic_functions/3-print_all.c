#include <stdio.h>
#include "stdarg.h"

/**
* print_sep - check the code
* @c: *char
* Return: Always int.
*/
void print_sep(char c)
{
	if (c != '\0')
	{
		printf(", ");
	}
}

/**
* print_str - check the code
* @c: *char
* Return: Always int.
*/
void print_str(char *c)
{
	if (*c != '\0')
	{
		printf("%s", c);
	}
	else
	{
		printf("(nil)");
	}
}
/**
* print_all - check the code
* @format: *char
* Return: Always int.
*/
void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i;
	char *cp;
	void *vp;
	float *fp;

	va_start(ap, NULL);
	i = 0;
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'i':
			printf("%i", va_arg(ap, int));
			print_sep(format[i + 1]);
			break;
			case 'c':
			printf("%c", va_arg(ap, int));
			print_sep(format[i + 1]);
			break;
			case 'f':
			vp = va_arg(ap, int*);
			fp = vp;
			printf("%f\n", *fp);
			print_sep(format[i + 1]);
			break;
			case 's':
			vp = va_arg(ap, int*);
			cp = vp;
			print_str(cp);
			printf("%s", cp);
			print_sep(format[i + 1]);
			break;
			default:
			break;
		}
		i++;
	}
	va_end(ap);
	printf("\n");
}
