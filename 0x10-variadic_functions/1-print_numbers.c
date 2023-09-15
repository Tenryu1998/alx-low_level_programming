#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers,
 * followed by a new line.
 *
 * @seperator:  the string to be printed between numbers
 * @n: the number of integers passed to the function
 *
 * Return:void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i = 0;

	if (n == 0)
		return;

	va_start(list, n);

	for  (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, int));
		if ((i + 1) < n && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}

