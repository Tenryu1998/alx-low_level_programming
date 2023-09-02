#include "main.h"

/**
 * _memset - fills the first n bytes of a string with the constant byte b
 * @s: string
 * @b: constant byte
 * @n: number of bytes
 * Return: returns pointer to the string
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
