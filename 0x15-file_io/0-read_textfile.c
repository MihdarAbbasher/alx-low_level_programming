#include "main.h"

/**
 * read_textfile - writes the text to stdout
 * @filename: The character to print
 * @letters: size
 * Return: On success size.
 * On error, 0 is returned, and errno is set appropriately.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, cr, cw;
	char *s;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	s = malloc(letters * sizeof(char));
	if (s == NULL)
		return (0);
	cr = read(fd, s, letters);
	if (cr < 0)
	{
		free(s);
		return (0);
	}
	cw = write(STDOUT_FILENO, s, cr);
	if (cw < 0)
	{
		free(s);
		return (0);
	}
	close(fd);
	free(s);
	return (cr);
}

