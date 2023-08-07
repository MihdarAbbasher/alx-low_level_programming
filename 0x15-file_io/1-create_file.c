#include "main.h"

/**
 * _strlen - len of string.
 * @s: is a pointer to a char
 * Return: len.
 */

int _strlen(const char *s)
{
	unsigned int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * create_file - writes the text to stdout
 * @filename: The character to print
 * @text_content: text
 * Return: On success size.
 * On error, -1 is returned, and errno is set appropriately.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, cw, letters;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 00600);
	if (fd < 0)
		return (-1);
	letters = _strlen(text_content);
	cw = write(fd, text_content, letters);
	if (cw < 0)
		return (-1);
	close(fd);
	return (1);
}

