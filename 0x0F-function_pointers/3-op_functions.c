#include <stdlib.h>
#include <stdio.h>
/**
* op_add - add int
* @a: arr object
* @b: size
* Return: Always int.
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - add int
* @a: arr object
* @b: size
* Return: Always int.
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_div - add int
* @a: arr object
* @b: size
* Return: Always int.
*/
int op_div(int a, int b)
{
	if (b != 0)
		return (a / b);
	printf("Error\n");
	exit(100);
}

/**
* op_mod - add int
* @a: arr object
* @b: size
* Return: Always int.
*/
int op_mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	printf("Error\n");
	exit(100);
}

/**
* op_mul - add int
* @a: arr object
* @b: size
* Return: Always int.
*/
int op_mul(int a, int b)
{
	return (a * b);
}

