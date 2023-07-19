#include "main.h"

/**
 * positive_or_negative - Prints if an integer is positive or negative
 * @i: The integer to be checked
 *
 * Return: None
 */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);
}
