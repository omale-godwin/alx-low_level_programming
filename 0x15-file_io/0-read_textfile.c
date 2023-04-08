#include "main.h"


/**
 * read_textfile - reads file and prints to the POSIX  output
 * @filename: pointer to the file
 * @letters: number of letters it read and print
 * Return:  the actual number of letters it read and print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{

int filed;
ssize_t rcount, wcount;
char *buffer;

if (filename == NULL)
	return (0);

filed = open(filename, O_RDWR);
if (file == -1)
	return (0);

buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
{
	free(buffer);
	return (0);
}

rcount = read(filed, buffer, letters);
if (rcount == -1)
	return (0);

wcount = write(STDOUT_FILENO, buffer, rcount);

if (wcount == -1 || rcount != wcount)
	return (0);

free(buffer);

close(filed);

return (wcount);
}