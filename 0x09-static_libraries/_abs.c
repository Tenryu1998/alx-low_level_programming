#include "main.h"

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
		return (-i);
	else
		return (0);
}
