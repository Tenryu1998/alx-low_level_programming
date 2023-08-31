#include "main.h"

/**
 * _puts_recursion: prints a string, followed by a new line
 * @stringChar: pointer to the character to print
 */
void _puts_recursion(char *stringChar)
{
	/**
	* string character is empty print newline and return
	* we all know '\0' is the last character in an array of characters(string)
	*/
	if (*stringChar == '\0')
	{
		_putchar('\n');
		return;
	}

	//use the _putchar function to output the string character
	_putchar(*stringChar);

	//call this function again to print the next string character
	//stringChar + 1 is the pointer to the next string
	_puts_recursion(stringChar + 1);
}
