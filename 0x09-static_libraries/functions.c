#include <stddef.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: return 1 or -1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

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

/**
 * _isalpha - checks if character is an alphabet
 * @c: character
 * Return: if true return 1 else 0
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);

	return (0);
}

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

/**
 * _isupper - checks if character is in uppercase
 * @c: character
 * Return: if true returns 1 else returns 0
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);

	return (0);
}

/**
 * _isdigit - checks if a  character is a digit or not
 * @c: character
 * Return: returns 1 if it is digit else 0
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);

	return (0);
}


/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: returns the length of a string;
 */
int _strlen(char *s)
{
	int c, i;

	i = 0;

	for (c = 0; s[c] != '\0'; c++)
		i++;

	return (i);
}

/**
 * _puts - prints a string
 * @str: string
 * Return: returns nothing
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}

/**
 * _strcpy - Copy and pastes a string
 * @dest: destination string
 * @src: source string
 * Return: pointer to dest string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}

	*(dest + i) = '\0';
	return (dest);
}

/**
* _atoi - converts a string to an int
* @s: the string to be changed
*
* Return: the converted int
*/
int _atoi(char *s)
{
	int i = 1;
	unsigned int n = 0;
	do {
		if (*s == '-')
			i *= -1;
		else if (*s >= '0' && *s <= '9')
			n = n * 10 + (*s - '0');
		else if (n > 0)
			break;
	} while (*s++);

	return (n * i);
}

/**
 * _strcat - joins two strings together
 *@dest: String to append to
 *@src: String to be appended
 * Return: returns pointer to @dest
 */

char *_strcat(char *dest, char *src)
{

	int i = 0;
	int len = 0;

	while (dest[i++])
		len++;

	for (i = 0; src[i]; i++)
		dest[len++] = src[i];

	return (dest);
}

/**
 * _strncat - join two strings but add inputted number of bytes
 * @dest: string to be appended to
 * @src: string to append
 * @n:integer parameter to limit added bytes
 * Return: returns pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{

	int i = 0;
	int len = 0;

	while (dest[i++])
		len++;

	for (i = 0; src[i] && i < n; i++)
		dest[len++] = src[i];

	return (dest);
}

/**
 * _strncpy - copies a string from source to destination, including the terminating null byte
 * @dest: destination string
 * @src: source string
 * @n: limit to the number of byte copied
 * Return: returns pointer to destination string
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (src[i] != '\0')
			dest[i] = src[i];
		else
			break;

	}

	dest[i] = '\0';

	return (dest);
}

/**
 *  _strcmp - Function which compare two strings and
 * @s1: first string
 * @s2:second string
 * Return: returns zero if s1 == s2
 * returns negative number if s1 < s2
 * returns positive number if s1 > s2
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, diff = 0;

	while (1)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			break;

		if (s1[i] == '\0')
		{
			diff = s2[i];
			break;
		}

		if (s2[i] == '\0')
		{
			diff = s1[i];
			break;
		}

		if (s1[i] != s2[i])
		{
			diff = s1[i] - s2[i];
			break;
		}

		else
			i++;

	}
	return (diff);
}

/**
 * _memset - fills the first n bytes of a string with the constant byte b
 * @s: string
 * @b: constant byte
 * @n: number of bytes
 * Return: returns pointer to the string
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}

/**
 * _memcpy - copies n bytes from memory one memory area
 * to another
 * @dest:area where bytes are copied to
 * @src:area where bytes are copied from
 * @n:number of bytes to copy
 * Return: returns a pointer to n
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		dest[i] = src[i];

	return (dest);
}

/**
 * _strchr - Returns a pointer to the first occurrence
 * of the character c in the string s
 * @s: string
 * @c: character
 * Return: returns pointer to first occcurence of c
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; (s[i] != c) && (s[i] != '\0'); i++)
		;
	if (s[i] == c)
		return (s + i);
	else
		return (NULL);
}

/**
 * _strspn - search the number of bytes in the initial
 * segment of a string which consists only of bytes from another string
 * @s:segment targeted
 * @accept:reference bytes container
 *
 * Return:returns the number of bytes in the initial
 * segment of s which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
			{
				bytes++;
				break;
			}
			if ((accept[i + 1]) == '\0')
				return (bytes);
		}
		s++;
	}
	return (bytes);
}

/**
 * _strpbrk - locates the first occurrence in the string s
 * of any of the bytes in the string accept
 *
 * @s: string where search is made
 * @accept: string where searched bytes are located
 *
 * Return: Returns a pointer to the byte in s that matches
 * one of the bytes in accept, or NULL if no match is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
				return (s);
		}
		s++;
	}

	return ('\0');
}

/**
 * _strstr - finds the first occurrence of the substring needle
 * in the string haystack and the terminating null bytes (\0) are not compared
 * @haystack: string where the search is made
 * @needle: string whose occurence is searched in haystack
 * Return: returns a pointer to the beginning of the located
 * substring, or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			} while (haystack[i] == needle[i]);
		}
		haystack++;
	}
	return ('\0');
}
