#include "main.h"
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t f_d;
	ssize_t w;
	ssize_t t;

	f_d = open(filename, O_RDONLY);
	if (f_d == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	t = read(f_d, buffer, letters);
	w = write(STDOUT_FILENO, buffer, t);

	free(buffer);
	close(f_d);
	return (w);
}