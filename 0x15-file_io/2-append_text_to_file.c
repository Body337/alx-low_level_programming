#include "main.h"
int _strlen(char *s);
/**
 * append_text_to_file - this is a file
 * @filename: name of the file
 * @text_content: the text to be appended
 *
 * Return: 1 on success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		return (1);

	write(fd, text_content, _strlen(text_content));

	close(fd);
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
