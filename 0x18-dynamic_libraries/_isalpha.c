#include "main.h"

/* betty style doc for function main goes there */
/**
* _isalpha - check if alphabet
* @c: parameter to check
* Return: 0 or 1
*/
int _isalpha(int c)
{
	int r;

	if (c >= 'a' && c <= 'z')
	{
		r = 1;
	}
	else if (c >= 'A' && c <= 'Z')
	{
		r = 1;
	}
	else
	{
		r = 0;
	}
	return (r);
}
