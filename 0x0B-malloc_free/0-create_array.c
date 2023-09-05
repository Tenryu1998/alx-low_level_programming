#include "main.h"

/**
 * create_array - creates an array of chars
 * and initializes it with a specific char
 *
 * @size: size of the array
 * @c: character to initialize array with
 *
 * Return: NULL if size = 0,
 * returns a pointer to the array, or NULL if it fails
 */


char *create_array(unsigned int size, char c)
{
	char *myArray;
	unsigned int i;

	if (size < 1)
		return (NULL);

	myArray = (char *)malloc(sizeof(char) * size);

	if (myArray == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		myArray[i] = c;
	}

	return (myArray);
}
