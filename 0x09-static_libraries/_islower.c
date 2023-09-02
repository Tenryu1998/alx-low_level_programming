#include "main.h"

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
