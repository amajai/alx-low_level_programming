#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * create_file - creates a file.
 * @filename: name of file.
 * @text_content: string to write to file
 *
 * Return: 1 on success
 * -1, if error and filename is NULL.
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t w_bytes;
	int textfile, len = 0;

	if (filename == NULL)
		return (-1);
	textfile = open(filename, O_WRONLY | O_CREAT | O_EXCL, S_IRUSR | S_IWUSR);
	if (textfile == -1)
	{
		textfile = open(filename, O_WRONLY | O_TRUNC);
		if (textfile == -1)
			return (-1);
	}
	if (text_content == NULL)
	{
		w_bytes = write(textfile, "", 0);
		if (w_bytes == -1)
		{
			close(textfile);
			return (-1);
		}
		close(textfile);
		return (1);
	}
	while (text_content[len] != '\0')
		len++;
	w_bytes = write(textfile, text_content, len);
	if (w_bytes == -1)
	{
		close(textfile);
		return (-1);
	}
	close(textfile);
	return (1);
}

