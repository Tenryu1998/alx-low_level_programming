#include "main.h"

/**
 * _memcpy - copies n bytes from memory one memory area
 * to another
 * @dest:area where bytes are copied to
 * @src:area where bytes are copied from
 * @n:number of bytes to copy
 * Return: returns a pointer to n
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
