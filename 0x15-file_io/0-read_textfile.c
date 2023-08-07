#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @my_file: text file being read
 * @content: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *my_file, size_t content)
{
	char *a;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(my_file, O_RDONLY);
	if (fd == -1)
		return (0);
	a = malloc(sizeof(char) * content);
	t = read(fd, a, content);
	w = write(STDOUT_FILENO, a, t);

	free(a);
	close(fd);
	return (w);
}

