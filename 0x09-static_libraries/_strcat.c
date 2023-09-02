#include "main.h"

/**
 * _strcat - joins two strings together
 *@dest: String to append to
 *@src: String to be appended
 * Return: returns pointer to @dest
 */

char *_strcat(char *dest, char *src)
{

	int i = 0;
	int len = 0;

	while (dest[i++])
		len++;

	for (i = 0; src[i]; i++)
		dest[len++] = src[i];

	return (dest);
}
