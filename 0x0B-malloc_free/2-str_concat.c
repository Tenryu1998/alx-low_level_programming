#include "main.h"

/**
* str_concat - a function that concatenates two strings.
* @str1:First string
* @str2:Second string
*
* Return: NULL in case of failure , but pointer to new string in
* case of success
*/

char *str_concat(char *str1, char *str2)
{
	char *c_str;
	int i, c_i = 0,  len = 0;

	if (str1 == NULL)
		str1 = "";

	if (str2 == NULL)
		str2 = "";

	for (i = 0; str1[i] || str2[i]; i++)
		len++;

	c_str = malloc(sizeof(char) * len);

	if (c_str == NULL)
		return (NULL);

	for (i = 0; str1[i]; i++)
		c_str[c_i++] = str1[i];

	for (i = 0; str2[i]; i++)
		c_str[c_i++] = str2[i];

	return (c_str);
}
