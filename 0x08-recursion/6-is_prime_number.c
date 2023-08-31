#include "main.h"

/**
 * is_prime_number - checks if a number is a prime number or not
 * 
 * @n: number to evaluate
 *
 * Return: 1 if n is a prime number else 0
 */
int is_prime_number(int n)
{
	int ni;
	int result;

	if (n <= 1)
	{
		return (0);
	}

	ni = n - 1;

	result = is_prime_recursor(n, ni);

	return (result);
}


/**
 * is_prime_recursor - checks if a number is a prime number
 * recursively
 * 
 * @n: number to evaluate
 * @i: iterator
 *
 * Return: 1 if n is prime else 0
 */
int is_prime_recursor(int n, int i)
{
	int rem;
	int result;
	int ni;

	if (i == 1)
	{
		return (1);
	}

	rem = n % i;

	if ((rem == 0) && (i > 0))
	{
		return (0);
	}

	ni = i - 1;
	result = is_prime_recursor(n,ni);

	return (result);
}
