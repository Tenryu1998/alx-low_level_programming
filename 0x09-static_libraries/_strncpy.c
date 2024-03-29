#include "main.h"

/**
 * _strncpy - copies a string from source to destination
 * including the terminating null byte
 * @dest: destination string
 * @src: source string
 * @n: limit to the number of byte copied
 * Return: returns pointer to destination string
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (src[i] != '\0')
			dest[i] = src[i];
		else
			break;

	}

	dest[i] = '\0';

	return (dest);
}
