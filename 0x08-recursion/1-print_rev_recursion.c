#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @stringChar: pointer to string to print
 */
void _print_rev_recursion(char *stringChar)
{
	/**
	 * stringChar is not empty run
	*/
	if (*stringChar)
	{
		/**
		 * first call this function to print
		 * the next character in the string.
		 * This will recursively try to print the next character
		 * till it can finally print out the character
		*/
		_print_rev_recursion(stringChar + 1);

		/**
		 * This will print out the character
		*/
		_putchar(*stringChar);
	}
}
