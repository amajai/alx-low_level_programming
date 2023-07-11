#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
/**
 * _perror - prints error of with code and message
 * @code: status code.
 * @msg: message to print.
 * @arg: messaged argument.
 * Return: nothing
 */
void _perror(int code, char *msg, char *arg)
{
	dprintf(STDERR_FILENO, msg, arg);
	exit(code);
}
/**
 * _perrori - prints error of with code and message with
 * integer argument
 * @code: status code.
 * @msg: message to print.
 * @arg: messaged argument.
 * Return: nothing
 */
void _perrori(int code, char *msg, int arg)
{
	dprintf(STDERR_FILENO, msg, arg);
	exit(code);
}
/**
 * main - copies the content of a file to another file.
 * @ac: arguments count
 * @av: argument values
 * Return: 0 or status code
 */
int main(int ac, char **av)
{
	char *file_from = av[1];
	char *file_to = av[2], buf[1024];
	int fd_from, fd_to;
	ssize_t b_read, b_write;

	if (ac != 3)
		_perror(97, "Usage: cp file_from file_to", "");
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		_perror(98, "Error: Can't read from file %s", file_from);
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd_to == -1)
	{
		close(fd_from);
		_perror(99, "Error: Can't write to %s", file_to);
	}
	while ((b_read = read(fd_from, buf, 1024)) > 0)
	{
		b_write = write(fd_to, buf, b_read);
			if (b_write != b_read)
			{
				close(fd_from);
				close(fd_to);
				_perror(99, "Error: Can't write to %s", file_to);
			}
	}
	if (b_read == -1)
	{
		close(fd_from);
		close(fd_to);
		_perror(98, "Error: Can't read from file %s", file_from);
	}
	if (close(fd_from) == -1)
		_perrori(100, "Error: Can't close fd %d", fd_from);
	if (close(fd_to) == -1)
		_perrori(100, "Error: Can't close fd %d", fd_to);
	return (0);
}
