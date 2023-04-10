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
FILE *file; 
char *buffer; 
ssize_t bytes_read; 
ssize_t bytes_written;

if (filename == NULL)
{
	return (0);
}
file = fopen(filename, "r");
if (file == NULL)
{
	return (0);
}
buffer = malloc(sizeof(char) * (letters + 1));
if (buffer == NULL)
{
	fclose(file);
	return (0);
}
bytes_read = fread(buffer, sizeof(char), letters, file);
if (bytes_read <= 0)
{
	fclose(file);
	free(buffer);
	return (0);
}

bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
if (bytes_written != bytes_read)
{
	fclose(file);
	free(buffer);
	return (0);
}

fclose(file);
free(buffer);
return (bytes_read);
}
