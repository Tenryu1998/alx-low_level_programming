#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Finds the sum of even-valued terms in the Fibonacci sequence
 * up to a limit of 4,000,000.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int fib1 = 1, fib2 = 2, fib = 0, sum = 2;

	while (fib <= 4000000)
	{
		fib = fib1 + fib2;
		if (fib % 2 == 0)
			sum += fib;
		fib1 = fib2;
		fib2 = fib;
	}

	printf("%lu\n", sum);

	return (0);
}

