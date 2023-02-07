#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>


/**
 * read_textfile - writes the text to stdout
 * @filename: The character to print
 * @letters: size
 * Return: On success size.
 * On error, -1 is returned, and errno is set appropriately.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int cr, cw;
	char *s;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDWR);
	if (fd < 0)
		return (0);
	s = (char *) malloc(letters * sizeof(char));
	if (s == NULL)
		return (0);
	cr = read(fd, s, letters);
	if (cr < 0)
		return (0);
	cw = write(1, s, letters);
	if (cw < 0)
		return (0);
	close(fd);
	return (cr);
}

