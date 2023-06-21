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

	
}

