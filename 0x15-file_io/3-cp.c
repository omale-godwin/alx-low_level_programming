#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <errno.h>

#define BUFFER_SIZE 1024

/**
 * append_text_to_file - Append  end of a file
 * @file_from: file name
 * @file_to: add the string to end of file
 * @num_written: file name
 * @num_read: add the string to end of file
 * @buffer: buffering data
 * @st: stat
 * Return: 1 on success, -1 on errors
 */
int main(int argc, char *argv[])
{
int file_from;
int file_to;
ssize_t num_read;
ssize_t num_written;
char buffer[BUFFER_SIZE];
struct stat st;
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
exit(97);
}
file_from = open(argv[1], O_RDONLY);
if (file_from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
if (fstat(file_from, &st) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't get file status of %s\n", argv[1]);
exit(99);
}
file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, st.st_mode);
if (file_to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
while ((num_read = read(file_from, buffer, BUFFER_SIZE)) > 0)
{
num_written = write(file_to, buffer, num_read);
if (num_written != num_read)
{
dprintf(STDERR_FILENO, "Error: Incomplete write to %s\n", argv[2]);
exit(99);
}
}
if (num_read == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
if (close(file_from) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
exit(100);
}
if (close(file_to) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
exit(100);
}
return (0);
}
