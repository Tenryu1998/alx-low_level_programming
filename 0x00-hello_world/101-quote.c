#include <unistd.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the string "and that piece of art is useful"
 *		- Dora Korpar, 2015-10-19,"
 *              followed by a newline character, to the standard error.
 *
 * Return: Always 1 (Error)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
