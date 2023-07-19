#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the first 50 Fibonacci numbers, separated by comma and
 * followed by a space.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	unsigned long int fib1 = 1, fib2 = 2, fib;

	printf("%lu, %lu", fib1, fib2);

	for (i = 3; i <= 50; i++)
	{
		fib = fib1 + fib2;
		printf(", %lu", fib);
		fib1 = fib2;
		fib2 = fib;
	}

	printf("\n");

	return (0);
}
