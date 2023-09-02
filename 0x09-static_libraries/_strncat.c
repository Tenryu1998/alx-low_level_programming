#include "main.h"

/**
 * _strncat - join two strings but add inputted number of bytes
 * @dest: string to be appended to
 * @src: string to append
 * @n:integer parameter to limit added bytes
 * Return: returns pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{

	int i = 0;
	int len = 0;

	while (dest[i++])
		len++;

	for (i = 0; src[i] && i < n; i++)
		dest[len++] = src[i];

	return (dest);
}
