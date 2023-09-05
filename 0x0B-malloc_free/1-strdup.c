#include "main.h"

/**
 * _strdup - returns a pointer to
 * a newly allocated space in memory,
 * which contains a copy of the string
 * given as a parameter
 *
 * @str: pointer to the string
 *
 * Return: Returns NULL if str = NULL
 * On success, the _strdup function returns
 * a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	char *myArray;
	int i, l;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		l++;

	if (l < 1)
		return (NULL);

	myArray = malloc(sizeof(char) * (l + 1));

	if (myArray == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		myArray[i] = str[i];

	myArray[l] = '\0';

	return (myArray);
}
