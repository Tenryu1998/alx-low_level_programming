#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of the memory block to be allocated
 *
 * Return: the pointer to the address of the memory block
 */
void *malloc_checked(unsigned int b)
{
	void *memBlock;

	memBlock = malloc(b);

	if (memBlock == NULL)
		exit(98);

	return (memBlock);
}
