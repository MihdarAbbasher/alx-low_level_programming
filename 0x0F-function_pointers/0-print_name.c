#include <stddef.h>

/**
* print_name - check the code
* @f: dog object
* @name: dog name
* Return: Always void.
*/
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
