#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);
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

/**
 * _strlen(char *s)- check the co
 * @s: char pointer
 * Return: int len
*/
unsigned int _strlen(char *s)
{
	int i = 0;

	while (1 == 1)
	{
		if (*(s + i) != '\0')
		{
			i += 1;
		}
		else
		{
			break;
		}
	}
	return (i);
}


/**
 * _pow_recursion - print the code
 * @x: number
 * @y: number
 * Return: int fact
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
/**
* onlydigits - print the alphabet
* @s: char to check
* Return: 0
*/
int onlydigits(char *s)
{
	int l, i;

	l = _strlen(s);
	for (i = 0; i < l; i++)
	{
		if (!_isdigit(*(s + i)))
			return (0);
	}
	return (1);
}



/**
 * str_to_int - check the code
 * @dest: arg str
 * Return: Always int.
 */

unsigned int str_to_int(char *dest)
{
	unsigned int n, ss, dc, res, i, tmp;

	n = _strlen(dest);
	ss = n / 2;
	for (i = 0; i < ss; i++)
	{
		dc = dest[n - i - 1];
		dest[n - 1 - i] = dest[i];
		dest[i] = dc;
	}
	res = 0;
	for (i = 0; i < n; i++)
	{
		tmp = _pow_recursion(10, i);
		res += tmp * (dest[i] - 48);

	}
	return (res);
}



/**
 * main - check the code
 * @argc: arg count
 * @argv: arg vector
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i;
	unsigned int res, num1, num2;
	char *s, *n1, *n2;

	s  = "Error\n";
	if (argc != 3)
	{
		for (i = 0; i < 6; i++)
		{
			_putchar(s[i]);
		}
		exit(98);
	}
	n1 = argv[1];
	n2 = argv[2];
	if (onlydigits(n1) && onlydigits(n2))
	{
		num1 = str_to_int(n1);
		num2 = str_to_int(n2);
		res = num1 * num2;
		printf("%u\n", res);
	}
	else
	{
		for (i = 0; i < 6; i++)
		{
			_putchar(s[i]);
		}
		exit(98);
	}
	return (0);
}

