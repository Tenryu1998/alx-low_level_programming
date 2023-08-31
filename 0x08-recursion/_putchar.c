#include <unistd.h>

/**
 * _putchar: writes the character ch to the stdout
 * @ch: The character to print
 *
 * Return: On success 0 else return 1.
 */
int _putchar(char ch)
{
	return (write(1, &ch, 1));
}
