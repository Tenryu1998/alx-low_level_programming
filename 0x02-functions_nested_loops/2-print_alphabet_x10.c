#include "main.h"
#include "_putchar.c"

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase ten times followed by a new line.
 */
void print_alphabet_x10(void)
{
	int i;
	char letter;

	for (i = 0; i < 10; i++)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
	}
}