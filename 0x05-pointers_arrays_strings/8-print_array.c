#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers, then a new line.
 *
 * @a: Pointer to the array to be printed.
 * @n: The number of elements of the array to be printed.
 */
void print_array(int *a, int n)
{
	int i;

	/* Loop through the array and print the elements*/
	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

 		/* Print a comma and space */
		if (i != n - 1)
		{
			printf(", ");
		}
	}

	/* Print a new line character to stdout */
	printf("\n");
}

