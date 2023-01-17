#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * _strlen(char *s)- check the co
 * @s: char pointer
 * Return: int len
*/
int _strlen(char *s)
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
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/* betty style doc for function main goes there */
/**
* main - print the file name
* Return: 0
*/
int main(void)
{
	char *s;
	int i, l;

	s = __FILE__;
	l = _strlen(s);
	for (i = 0; i < l; i++)
	{
		_putchar(i);
	}
	return (0);
}
