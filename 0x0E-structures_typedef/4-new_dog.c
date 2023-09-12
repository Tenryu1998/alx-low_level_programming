#include "dog.h"

/**
 * _strlen - clalculates the length of a string
 * @str: pointer to string memblock
 * Return: length of string
 */
int _strlen(char *str)
{
	int l = 0;
	while (str[l])
		l++;

	return (l);
}

/**
 * _strcopy - copies string from source
 * to destination
 *
 * @dest: pointer to destination memblock
 * @src: pointer source memblock
 * Return: pointer to destination memblock
 */
char *_strcopy(char *dest, char *src)
{
	int i = 0;

	for (; src[i] ; i++)
		dest[i] = src[i];

	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - a function that creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: dog's owner
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;
	int ln, lo;

	if (name == NULL  || age < 0 || owner == NULL)
		return (NULL);

	ln = _strlen(name);
	lo = _strlen(owner);

	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (NULL);

	ndog->name = malloc(sizeof(char) * (ln + 1));
	if (ndog->name == NULL)
	{
		free(ndog);
		return (NULL);
	}
	ndog->name = _strcopy(ndog->name,name);
	ndog->age = age;
	ndog->owner = malloc(sizeof(char) * (lo + 1));
	if (ndog->owner == NULL)
	{
		free(ndog->owner);
		free(ndog);
		return (NULL);
	}
	ndog->owner = _strcopy(ndog->owner,owner);
	return (ndog);
}
