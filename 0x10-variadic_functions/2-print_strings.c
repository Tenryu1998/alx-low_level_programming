#include "variadic_functions.h"

/**
 * print_strings -  prints strings, followed by a new line
 * @separator:  the string to be printed between the strings
 * @n: the number of strings passed to the function
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i = 0;
	char *str;

	if (n == 0)
		return;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if ((i + 1) < n && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
