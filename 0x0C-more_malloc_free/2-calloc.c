#include "main.h"

/**
 * *memSet - fills memory block with char
 * @s: memory block
 * @c: char
 * @n: limit
 *
 * Return: pointer to the memory area s
 */
char *memSet(char *s, char c, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = c;

	return (s);
}

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements
 * @size: size of the memory block
 *
 * Return: pointer to the address of the memory block
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memBlock;

	if (nmemb == 0 || size == 0)
		return (NULL);

	memBlock = malloc(nmemb * size);

	if (memBlock == NULL)
		return (NULL);

	memSet(memBlock, 0, nmemb * size);
	return (memBlock);
}
