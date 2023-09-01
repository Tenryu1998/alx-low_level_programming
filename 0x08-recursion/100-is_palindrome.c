#include "main.h"
#include <string.h>

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 *
 * Return: 1 if it is, 0 it's not
 */
int is_palindrome(char *s)
{
	int res;
	int len;

	if (*s == 0)
	{
		return (1);
	}

	len = strlen(s) - 1;
	res = palindrome_recursor(s, 0, len);

	return (res);
}

/**
 * strlen_recursor - returns the length of a string
 * @s: string
 *
 * Return: length of string
 */
int strlen_recursor(char *s)
{
	int res;
	char *ns;

	/**
	 * last character of string return 0
	 */
	if (*s == '\0')
	{
		return (0);
	}

	/**
	 * ns: pointer to next string character
	 * res: 1 + the length of the string starting from the next character(ns)
	 */
	ns = s + 1;
	res = 1 + strlen_recursor(ns);

	return (res);
}

/**
 * palindrome_recursor - checks the characters recursively for palindrome
 * @s: string to check
 * @i: index
 * @l: length of the string
 *
 * Return: 1 if palindrome else 0
 */
int palindrome_recursor(char *s, int i, int l)
{
	int res;

	if (i >= l)
		return (1);

	if (s[i] != s[l])
		return (0);

	res = palindrome_recursor(s, i + 1, l - 1);

	return (res);
}
