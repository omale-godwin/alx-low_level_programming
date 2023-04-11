#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>


/**
 * read_textfile - reads file and prints to the POSIX  output
 * @filename: pointer to the file
 * @letters: number of letters it read and print
 * Return:  the actual number of letters it read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
FILE *filed;
char *buffered;
ssize_t bytes_to_read;
ssize_t bytes_written;

if (filename == NULL)
{
	return (0);
}
filed = fopen(filename, "r");
if (filed == NULL)
{
	return (0);
}
buffered = malloc(sizeof(char) * (letters + 1));
if (buffered == NULL)
{
	fclose(filed);
	return (0);
}
bytes_to_read = fread(buffered, sizeof(char), letters, filed);
if (bytes_to_read <= 0)
{
fclose(filed);
free(buffered);
return (0);
}

bytes_written = write(STDOUT_FILENO, buffered, bytes_to_read);
if (bytes_written != bytes_to_read)
{
fclose(filed);
free(buffered);
return (0);
}

fclose(filed);
free(buffered);
return (bytes_to_read);
}
