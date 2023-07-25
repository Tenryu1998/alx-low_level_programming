#include "main.h"
#include <stdio.h>

/**
 * puts2 - Prints every other character of a string, starting with the first character.
 *
 * @str: Pointer to the string to be printed.
 */
void puts2(char *str)
{
	int i = 0;

	/* Loop through the string until the null terminator is encountered */
	while (str[i] != '\0')
	{
		/* Print the character at the current index */
		putchar(str[i]);

		/* Increment the index by 2 to skip every other character */
		i += 2;
	}

	/* Print a new line character to stdout */
	putchar('\n');
}

