#include "main.h"
#include <stdio.h>

/**
 * rev_string - Reverses a string.
 *
 * @s: Pointer to the string to be reversed.
 */
void rev_string(char *s)
{
	char temp;
	int length = 0;
	int start = 0;
	int end;

	/* Calculate the length of the string */
	while (s[length] != '\0')
	{
		length++;
	}

	end = length - 1;

	/* Swap characters from start to end until start is greater than end */
	while (start < end)
	{
		/* Swap the characters using a temporary variable */
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;

		/* Move the start and end indices towards each other */
		start++;
		end--;
	}
}

