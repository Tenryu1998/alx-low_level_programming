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
	unsigned int len, si, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (si = 0; s1[si]; si++)
		len++;

	for (si = 0; s2[si] && si <= n; si++)
		len++;

	ns = (char *) malloc((len + 1) * sizeof(char));

	if (ns == NULL)
		return (NULL);

	for (si = 0; s1[si]; si++)
		ns[si] = s1[si];

	i = si;

	for (si = 0; s2[si] && si <= n; si++)
		ns[i++] = s2[si];

	ns[i] = '\0';
	return (ns);
}
