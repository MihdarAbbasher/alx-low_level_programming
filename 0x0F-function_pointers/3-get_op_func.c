#include"3-calc.h"
#include <string.h>
/**
* get_op_func - add int
* @a: arr object
* @b: size
* Return: Always int.
*/
int (*get_op_func(char *s))(int a, int b)
{
	int i;
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}};

	while (i < 5)
	{
		if (strcmp(s, ops[i].op) == 0)
		{
			return (*(ops[i]).f);
		}
		i++;
	}
	return (NULL);
}

