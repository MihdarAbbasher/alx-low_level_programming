#include "main.h"

/* betty style doc for function main goes there */
/**
* _isupper - print the alphabet
* @c: char to check
* Return: 0
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
