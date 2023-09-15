#include "variadic_functions.h"
/**
 * sum_them_all - sums all its parameters
 * @n: first parameter
 *
 * Return: 0 if n is null else
 * sum of parameters in other case
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	int sum = 0;
	int i = 0;

	if (n == 0)
		return (0);

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		sum += va_args(list, int);
	}
	va_end(list);
	return (sum);
}
