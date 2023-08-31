#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: number to raise
 * @y: power
 *
 * Return: result of the power
 */
int _pow_recursion(int x, int y)
{

	int nextPow;
	int result;

	/**
	 * Power is less than 0 return -1
	*/
	if (y < 0)
		return (-1);

	/**
	 * Power is equal to 1 return 1
	 */
	if (y == 0)
		return (1);

	/**
	 * Recursively call this function(_pow_recursion())
	 * x remains x but we are going to reduce the pow
	 */

	nextPow = y - 1;
	result = (x * _pow_recursion(x, nextPow));

	return (result);
}
