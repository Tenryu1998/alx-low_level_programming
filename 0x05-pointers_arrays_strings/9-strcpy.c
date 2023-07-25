#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src to
 *		the buffer pointed to by dest.
 *
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string.
 *
 * Return: The pointer to the destination buffer.
 */
char *_strcpy(char *dest, char *src)
{
    char *start = dest;

    /* Copy each character of the source string to 
     *	the destination buffer 
    */
    while (*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }

    /* Copy the terminating null byte */
    *dest = '\0';

    /* Return the pointer to the destination buffer */
    return (start);
}

