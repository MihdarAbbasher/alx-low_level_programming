#include "main.h"
/**
  * _strlen - get len of str
  * @s: the str
  *
  * Return: len of str
  */
int _strlen(char *s)
{
	int len;

	while (s[len])
		len++;
	return (len);
}

/**
 * create_file - write a file
 * @filename: the file to write.
 * @text_content: the content to write
 * Description: write  a file
 * Return: 1 in success -1 in failure
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

