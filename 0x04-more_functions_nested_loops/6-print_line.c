#include "main.h"

/**
 * print_line - Draws a straight line in the terminal using the character '_'.
 * @n: The number of times the character '_' should be printed.
 *
 * Description: This function prints the character '_' n times in a straight line
 *              and ends the line with a newline character '\n'. If n is 0 or less,
 *              it prints only the newline character to create a blank line.
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
