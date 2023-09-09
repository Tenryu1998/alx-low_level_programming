#include "main.h"

/**
* array_range - creates an array of integers
* @min: smallest number in the array
* @max: largest value in the array
*
* Return: pointer to the address of the memory block
*/

int *array_range(int min, int max)
{
	int *memBlock;
	int len, i;

	if (min > max)
		return (NULL);

	len = 0;
	for (i = min; i <= max; i++)
		len++;

	memBlock = malloc(sizeof(int *) * len);

	if (memBlock ==  NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		memBlock[i] = min++;
	}

	return (memBlock);
}
