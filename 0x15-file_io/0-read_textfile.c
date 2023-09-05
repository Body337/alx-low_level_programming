#include "main.h"
/**
 * read_textfile - reads a text file
 * @filename: a pointer to the file name
 * @letters: number of letters to be read and printed
 *
 * return: the number of letters it could print or read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t count = 0;
	char *buff;

	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char *) * letters);
	fd = open(filename, O_RDONLY);

	if (fd == -1 || buff == NULL)
		return (0);
	count = read(fd, buff, letters);

	write (1, buff, letters);

	free(buff);
	close(fd);
	return (count);
}
