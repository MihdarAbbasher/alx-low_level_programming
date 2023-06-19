#include <stdio.h>
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/* _strlen(char *s)- check the co
 * @s: char pointer
 * Return: int len
*/
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i += 1;
	}
	return (i);
}

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
		_putchar(s[i]);
	}
	_putchar('\n');
	return (0);
}
