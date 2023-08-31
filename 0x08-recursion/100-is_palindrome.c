#include "main.h"

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 *
 * Return: 1 if it is, 0 it's not
 */
int is_palindrome(char *s)
{
	int res;
	int strlen;

	if (*s == 0)
	{
		return (1);
	}

	strlen = strlen_recursor(s);
	res = palindrome_recursor(s, 0, strlen);

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
 * @i: iterator
 * @l: length of the string
 *
 * Return: 1 if palindrome else 0
 */
int palindrome_recursor(char *s, int i, int l)
{
	/**
	 * ni: the next iterator
	 * pl: reduced length of string
	 */
	int ni = i + 1;
	int pl = l - 1;

	/**
	 * si: pointer to the next string character in forward
	 * sl: pointer to the next string in reverse
	 */
	char *si = (s + i);
	char *sl = (s + pl);

	int res;

	/**
	 * if the next string character forward
	 * is not equal to the next string backward
	 * return 0
	 * else if i is greater than or equal to l
	 * that is if the iterator is at the middle or past the middle of the string
	 * return 1
	 */
	if (si != sl)
	{
		return (0);
	}
	else if (i >= l)
	{
		return (1);
	}

	/**
	 * res: calling this function again
	 * but with the next iterator and the reduced length
	 */
	res = palindrome_recursor(s, ni, pl);

	return (res);
}
