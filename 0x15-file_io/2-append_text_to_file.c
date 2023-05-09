#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of file.
 * @text_content: string to write to file
 *
 * Return: 1 on success
 * -1, if error and filename is NULL.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t w_bytes;
	int textfile, len = 0;

	if (filename == NULL)
		return (-1);
	textfile = open(filename, O_WRONLY | O_APPEND);
	if (textfile == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
		w_bytes = write(textfile, text_content, len);
		if (w_bytes == -1)
		{
			close(textfile);
			return (-1);
		}
	}
	close(textfile);
	return (1);
}
