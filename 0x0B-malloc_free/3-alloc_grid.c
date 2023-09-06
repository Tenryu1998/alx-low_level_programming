#include "main.h"



/**
* alloc_grid - returns a pointer to a
* 2 dimensional array of integers.
* @width: width of array
* @height: height of array
*
* Return: pointer to the array
*/

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	/**
	 * a two dimensional array is
	 * an array of pointers to pointers
	 * to integers
	 * allocating memory for the grid rows
	 */
	grid = (int **)malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(sizeof(int) * width);

		if (grid[i] == NULL)
		{
			while (i >= 0)
			{
				free(grid[i]);
				i--;
			}

			free(grid);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
