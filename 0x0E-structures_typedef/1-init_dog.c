#include "dog.h"

/**
 * init_dog -  initialize a variable
 * of type struct dog
 * @d: pointer to variable
 * @name: pointer to dog's name
 * @age: age
 * @owner: pointer to dog's owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
