
#include <stddef.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: return 1 or -1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _islower - checks if character is in lowercase
 * @c: character
 * Return: if true return 1 else return 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

	return (0);
}

/**
 * _isalpha - checks if character is an alphabet
 * @c: character
 * Return: if true return 1 else 0
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);

	return (0);
}

/**
 * _abs - returns the absolute value of a number
 * @i: number
 * Return: returns 0 or the absolute value of the number
 */
int _abs(int i)
{
	if (i > 0)
		return (i);
	else if (i < 0)
