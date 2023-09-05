#include "main.h"
int _strlen(char *s);
/**
 * create_file - creates a file
 * @filename: the file to be created
 * @text_content: a null terminated string
 *
 * Return: 1 on success -1 of faill
 */
int create_file(const char *filename, char *text_content)
{
	int fd;

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
		write(fd, text_content, _strlen(text_content));
	return (1);
}
/**
  * _strlen - Returns the length of a string
  * @s: String to count
  *
  * Return: String length
  */
int _strlen(char *s)
{
	int c = 0;

	while (s[c])
		c++;

	return (c);
}
