#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <unistd.h>
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

/**
 * read_textfile - read text file.
 * @filename: is a pointer to a file
 * @letters: size
 * Return: size.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *myfp;
	unsigned int c, i;

	i = 0;
	if (filename == NULL)
		return (0);
	myfp = fopen(filename, "r");
	while (i < letters)
	{
		c = fgetc(myfp);
		if (feof(myfp))
			break;
		_putchar(c);
		i++;
	}
	fclose(myfp);
	return (i);
}

