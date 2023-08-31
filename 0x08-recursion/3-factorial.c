#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @num: number to return the factorial
 *
 * Return: factorial of num
 */
int factorial(int num)
{
	/**
	 * num less than 0 return -1
	*/
	if (num < 0)
		return (-1);

	/**
	 * num is equal to 0 return
	*/
	if (num == 0)
		return (1);

	/**
	 * return num multiplied by the factorial
	 * of the previous number
	 * We all know the factorial of a number is the
	 * number multiplied by the factorial of the previous number
	*/
	return (num * factorial(num - 1));
}
