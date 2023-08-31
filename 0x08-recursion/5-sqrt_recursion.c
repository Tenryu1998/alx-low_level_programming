#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 *
 * Return: the natural square root
 */
int _sqrt_recursion(int n)
{

	int nsqrt;

	if (n < 0)
	{
		return (-1);
	}

	nsqrt = sqrt_recursor(n, 0);

	return (nsqrt);
}

#include "main.h"

/**
 * sqrt_recursor - recursively finds the square root of a number
 * @n: number
 * @i: iterator num
 *
 * Return: the square root of the number
 */
int sqrt_recursor(int n, int i)
{
	int ni;
	int result;
	int sqrt;

	sqrt = i * i;

	if (sqrt > n)
	{
		return (-1);
	}
	else if (sqrt == n)
	{
		return (i);
	}

	ni = i + 1;
	result = sqrt_recursor(n, ni);

	return (result);
}
