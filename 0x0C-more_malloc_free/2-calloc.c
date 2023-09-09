#include "main.h"

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
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	memBlock = malloc(nmemb * size);

	if (memBlock == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
		((char *)memBlock)[i] = 0;

	return (memBlock);
}
