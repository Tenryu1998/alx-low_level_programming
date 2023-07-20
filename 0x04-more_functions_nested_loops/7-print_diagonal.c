#include "main.h"

/**
 * print_diagonal - Draws a diagonal line in the terminal using the character '\'.
 * @n: The number of times the character '\' should be printed.
 *
 * Description: This function prints the character '\' n times in a diagonal pattern
 *              and ends the diagonal with a newline character '\n'. If n is 0 or less,
 *              it prints only the newline character to create a blank line.
 */
void print_diagonal(int n)
{
	int spaces;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	while (n > 0)
	{
		spaces = n - 1;
		while (spaces > 0)
		{
			_putchar(' ');
			spaces--;
		}
		_putchar('\\');
		_putchar('\n');
		n--;
	}
}
