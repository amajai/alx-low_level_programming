#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - reads a text file and prints it to the
 * POSIX standard output.
 * @filename: name of file.
 * @letters: number of letters to read and print
 *
 * Return: number of letters it can read and write.
 * 0, if error, file cannot be open or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t read_c;
	int textfile;
	char *text;

	if (filename == NULL)
		return (0);
	textfile = open(filename, O_RDONLY);
	if (textfile == -1)
		return (0);
	text = malloc(sizeof(char) * letters);
	if (text == NULL)
	{
		close(textfile);
		return (0);
	}
	read_c = read(textfile, text, letters);
	if (read_c == -1)
	{
		close(textfile);
		free(text);
		return (0);
	}
	write(STDOUT_FILENO, text, read_c);
	close(textfile);
	free(text);
	return (read_c);
}
