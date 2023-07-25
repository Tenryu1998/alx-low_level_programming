#include "main.h"
#include <stdio.h>

/**
 * print_rev - Prints a string in reverse, followed by a new line.
 *
 * @s: Pointer to the string to be printed in reverse.
 */
void print_rev(char *s)
{
	int i;
	int length = 0;

	/* Calculate the length of the string */
	while (s[length] != '\0')
	{
		length++;
	}

	/* Print the string in reverse */
	for (i = length - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}

	/* Print a new line character to stdout */
	putchar('\n');
}
