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
	int len, i, x, y;

	if (min > max)
		return (NULL);

	if (min < 0)
		x = -min;
	else
		x = min;

	if (max < 0)
		y = -max;
	else
		y = max;

	len = (y - x) + 1;

	memBlock = malloc(sizeof(int *) * len);

	if (memBlock ==  NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		memBlock[i] = min++;
	}

	return (memBlock);
}
