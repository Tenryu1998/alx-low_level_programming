#include "main.h"

/**
 * more_numbers - Prints 10 times the numbers from 0 to 14, 
 *		followed by a new line.
 *
 * Description: This function prints the numbers 0 to 14, each repeated 10 times,
 *		and then followed by a new line. It uses the _putchar function
 *		to print the characters to the standard output.
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				_putchar((j / 10) + '0');
			}
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
