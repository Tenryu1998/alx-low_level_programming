#include "main.h"

/**
* alloc_grid - returns a pointer to a
*2 dimensional array of integers.
*@w: width oàf array
*@h: height of array
*
*Return: pointer to the array
*/

int **alloc_grid(int w, int h)
{
	int **array;
	int i = 0, j;

	if (w == 0 || h == 0)
		return (NULL);
	array = (int **) malloc(sizeof(int *) * h);
	if (array != NULL)
	{
		for (; i < h; i++)
		{
			array[i] = (int *) malloc(sizeof(int) * w);
			if (array[i] != NULL)
			{
				for (j = 0; j < w; j++)
					array[i][j] = 0;
			}
			else
			{
				while (i >= 0)
				{
					free(array[i]);
					i--;
				}
				free(array);
				return (NULL);
			}
		}
		return (array);
	}
	else
	{
		return (NULL);
	}
}
