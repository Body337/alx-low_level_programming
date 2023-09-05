#include "main.h"
#define BUFFER 1024
void copy(const char *from, const char *to);
/**
 * main - this is the main block
 * @ac: number of arguments
 * @av: arguments
 *
 * Return: 1 on success
 */
int main(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			exit(97);
	}

	copy(av[1], av[2]);
	exit(0);
}
/**
 * copy - copies the text from a file to another
 * @to: the name of the file to be coppied too
 * @from: the source of the string
 *
 * Return: nothing
 */
void copy(const char *from, const char *to)
{
	ssize_t readed;
	int to_fd, from_fd;
	char *from_str[1024];

	from_fd = open(from, O_RDONLY);
	if (from_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from);
		exit(98);
	}
	to_fd = open(to, O_WRONLY | O_CREAT | O_TRUNC, 0665);
	if (to_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", to);
		exit(99);
	}
	while ((readed = read(from_fd, from_str, BUFFER)) > 0)
	{
		if (write(to_fd, from_str, readed) != readed)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", to);
			exit(99);
		}
	}
	if (readed == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from);
		exit(98);
	}
	if (close(from_fd))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to_fd);
		exit(100);
	}
	if (close(to_fd))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from_fd);
		exit(100);
	}
}
