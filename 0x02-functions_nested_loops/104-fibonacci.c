#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the first 98 Fibonacci numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int fib1 = 1, fib2 = 2, fib = 0;
	int count;

	printf("%lu, %lu", fib1, fib2);

	for (count = 3; count <= 98; count++)
	{
		fib = fib1 + fib2;
		printf(", %lu", fib);

		fib1 = fib2;
		fib2 = fib;
	}

	printf("\n");

	return (0);
}
