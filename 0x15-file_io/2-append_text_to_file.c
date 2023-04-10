#include "main.h"
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

/**
 * append_text_to_file - Append  end of a file
 * @filename: file name
 * @text_content: add the string to end of file
 * Return: 1 on success, -1 on errors
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	ssize_t text_len;
	ssize_t bytes_written;
    if (filename == NULL) {
        return (-1);
    }

    file = open(filename, O_WRONLY | O_APPEND);
    if (file == -1)
	{
        return (-1);
    }

    if (text_content != NULL)
	{
        text_len = strlen(text_content);
        bytes_written = write(file, text_content, text_len);
        if (bytes_written != text_len)
		{
            close(file);
            return (-1);
        }
    }

    if (close(file) == -1)
	{
        return (-1);
    }

    return (1);
}

