#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
		putchar('0' + number);

	putchar('\n');

	return (0);
}
