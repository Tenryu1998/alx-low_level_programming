#include "main.h"

/**
* wildcmp - compares two strings
* @s1: first string
* @s2: second string
*
* Return: 1 if identical else 0
*/

int wildcmp(char *s1, char *s2)
{
	int res = 0;

	/**
	 * if s2 is empty return
	 * the result is the condition: is s1 also empty
	 */
	if (*s2 == '\0')
		res = (*s1 == '\0');

	/**
	 * if s1 and s2 are equal and s1 should not be empty
	 * the result is the result of calling this same
	 * function with pointers to the next characters
	 * in both strings
	 */
	if (*s2 == *s1 && *s1 != '\0')
	{
		res = wildcmp(s1 + 1, s2 + 1);
	}

	/**
	 * s2 is *
	 */
	if (*s2 == '*')
	{
		res = wildcmp(s1, s2 + 1);

		if (res == 0)
		{
			if (*s1 != '\0')
				res = wildcmp(s1 + 1, s2);
		}
	}
	return (res);
}
