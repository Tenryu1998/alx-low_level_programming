#include "main.h"

/**
* str_concat - a function that concatenates two strings.
* @s1:First string
* @s2:Second string
*
* Return: NULL if NULL is passed,
* return NULL on failure else return pointer to new string
*/

char *str_concat(char *s1, char *s2)
{
	char *newString;
	int i, l;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		l++;

	for (i = 0; s2[i]; i++)
		l++;

	newString = malloc(sizeof(char) * l);

	if (newString == NULL)
		return (NULL);

	l = 0;

	for (i = 0; s1[i]; i++)
	{
		newString[l] = s1[i];
		l++;
	}

	for (i = 0; s2[i]; i++)
	{
		newString[l] = s2[i];
		l++;
	}

	return (newString);
}
