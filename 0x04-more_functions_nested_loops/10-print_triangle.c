#include "main.h"

/**
 * print_triangle - Prints a triangle with '#' characters.
 *
 * @size: The size of the triangle.
 *
 * Description: This function prints a right-angled triangle with '#' characters.
 *              The number of '#' characters in each row increases from 1 to size.
 *
 * Return: void.
 */
void print_triangle(int size)
{

	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{

		for (i = 1; i <= size; i++)
		{
			for (j = 0; j < size - i; j++)
				_putchar(' ');

		 	for (j = 0; j < i; j++)
				_putchar('#');

			_putchar('\n');
		}
	}
}
