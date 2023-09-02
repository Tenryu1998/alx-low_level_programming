#include "main.h"

/**
 * _isdigit - checks if a  character is a digit or not
 * @c: character
 * Return: returns 1 if it is digit else 0
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);

	return (0);
}
