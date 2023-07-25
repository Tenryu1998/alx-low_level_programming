#include "main.h"
#include <stdio.h>

/**
 * _puts - Prints a string followed by a new line to stdout.
 *
 * @str: Pointer to the string to be printed.
 */
void _puts(char *str)
{
	/* Loop through the string until the null terminator is encountered */
	while (*str != '\0')
	{
	/* Print the character to stdout */
		putchar(*str);
		str++;
	}

	/* Print a new line character to stdout */
	putchar('\n');
}
