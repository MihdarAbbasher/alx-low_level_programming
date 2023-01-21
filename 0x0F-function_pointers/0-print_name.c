#include <stdio.h>
#include "dog.h"

/**
* print_name - check the code
* @f: dog object
* @name: dog name
* Return: Always void.
*/
void print_name(char *name, void (*f)(char *))
{
	if (*name != '\0')
	{
		f(name);
	}
}
