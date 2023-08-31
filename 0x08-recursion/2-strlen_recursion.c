#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @string: pointer to string to calculate the length of
 *
 * Return: length of the string
 */
int _strlen_recursion(char *string)
{
	/**
	 * String is empty return 0
	*/
	if (*string == '\0')
		return (0);

	/**
	 * Recursively call this function with the pointer
	 * to the next character in the string (string + 1)
	 * and add 1 to the result given
	*/
	return (1 + _strlen_recursion(string + 1));
}
