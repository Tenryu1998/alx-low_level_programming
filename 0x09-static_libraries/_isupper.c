#include "main.h"

/**
 * _isupper - checks if character is in uppercase
 * @c: character
 * Return: if true returns 1 else returns 0
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);

	return (0);
}
