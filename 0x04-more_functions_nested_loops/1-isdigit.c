#include <stdio.h>

/* betty style doc for function main goes there */
/**
* _isdigit - print the alphabet
* @c: char to check
* Return: 0
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
