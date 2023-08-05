#include "main.h"
/**
 * _strstr - finds the frist occurrence of a substring
 * @haystack: the frist string
 * @needle: the substring
 *
 * Return: the frist occurrence of the substring
 */
char *_strstr(char *haystack, char *needle)
{
	int a = 0;
	int b = 0;

	while (haystack[a])
	{
		while (needle[b])
		{
			if (needle[b] != haystack[a + b])
			{
				break;
			}
			b++;
		}
		if (needle[b] == '\0')
		{
			return (haystack + a);
		}
		a++;
	}
	return ('\0');
}
