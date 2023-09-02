#include "main.h"

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
