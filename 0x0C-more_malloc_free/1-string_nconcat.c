#include "main.h"

/**
 * string_nconcat - a function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2 to concatenate to s1
 *
 * Return: on success return pointer to new string
 * else return NULL
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ns;
	unsigned int len1, len2, si, si2, i;

	si2 = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (si = 0; s1[si]; si++)
		len1++;

	for (si = 0; s2[si]; si++)
		len2++;

	if (n < len2)
		i = len1 + n;
	else
		i = len1 + len2;

	ns = malloc(sizeof(char) * (i + 1));

	if (ns == NULL)
		return (NULL);

	for (si = 0; si < len1; si++)
		ns[si] = s1[si];

	while (si < i)
		ns[si++] = s2[si2++];

	ns[i] = '\0';
	return (ns);
}
