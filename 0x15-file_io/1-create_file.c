#include "main.h"


/**
 * create_file - create file give read/write access to user
 * @filename: file to create
 * @text_content: string to write to file
 * Return: 1 on success, -1 on errors
 */
int create_file(const char *filename, char *text_content)
{
int files_data, file_read_status, i;

if (filename == NULL)
	return (-1);

files_data = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

if (files_data == -1)
	return (-1);

if (text_content)
{
	for (i = 0; text_content[i] != '\0'; i++)
		;
	file_read_status = write(files_data, text_content, i);
	if (file_read_status == -1)
		return (-1);
}

close(files_data);
return (1);
}