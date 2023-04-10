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
































#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <errno.h>

#define BUFFER_SIZE 1024

/**
 * append_text_to_file - Append  end of a file
 * @filename: file name
 * @text_content: add the string to end of file
 * Return: 1 on success, -1 on errors
 */
void print_usage(char* program_name)
{
    dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", program_name);
}

void print_read_error(char* filename)
{
    dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
}

void print_write_error(char* filename)
{
    dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
}

void print_close_error(int fd)
{
    dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
}

int open_file_for_reading(char* filename)
{
int fd = open(filename, O_RDONLY);
if (fd == -1) {
    print_read_error(filename);
    exit(98);
}
return (fd);
}

int open_file_for_writing(char* filename, mode_t mode)
{
int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, mode);
if (fd == -1) {
    print_write_error(filename);
    exit(99);
}
return (fd);
}

void copy_file_contents(int fd_from, int fd_to)
{
ssize_t num_read, num_written;
char buffer[BUFFER_SIZE];

while ((num_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
{
num_written = write(fd_to, buffer, num_read);
if (num_written != num_read)
{
    print_write_error("destination file");
    exit(99);
}
}

if (num_read == -1)
{
print_read_error("source file");
exit(98);
}
}

void close_file(int fd)
{
if (close(fd) == -1) {
    print_close_error(fd);
    exit(100);
}
}

int main(int argc, char *argv[])
{
int fd_from, fd_to;
struct stat st;

if (argc != 3) {
print_usage(argv[0]);
exit(97);
}

fd_from = open_file_for_reading(argv[1]);
fd_to = open_file_for_writing(argv[2], st.st_mode);

if (fstat(fd_from, &st) == -1)
{
print_write_error(argv[2]);
exit(99);
}

copy_file_contents(fd_from, fd_to);

close_file(fd_from);
close_file(fd_to);

return (0);
}

