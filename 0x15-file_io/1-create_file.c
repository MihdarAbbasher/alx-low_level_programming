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
	int len, fd, writeVal;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	len = _strlen(text_content);
	writeVal = write(fd, text_content, len);
	if (writeVal < 0 || writeVal != len)
		return (-1);
	return (1);
}

