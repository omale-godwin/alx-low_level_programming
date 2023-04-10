#include "main.h"

/**
 * append_text_to_file - Append  end of a file
 * @filename: file name
 * @text_content: add the string to end of file
 * Return: 1 on success, -1 on errors
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_data, status, i;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);

	file_data = open(filename, O_APPEND | O_WRONLY);
	if (file_data == -1)
		return (-1);

	for (i = 0; text_content[i] != '\0'; i++)
		;
	status = write(file_data, text_content, i);
	if (status == -1)
		return (-1);

	close(file_data);
	return (1);
}

