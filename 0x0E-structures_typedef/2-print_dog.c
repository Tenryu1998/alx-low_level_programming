#include "dog.h"

/**
 * print_dog - a function that prints a struct dog
 * @d: pointer to struct
 *
 * RETURN: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("nil\n");

		if (d->age != NULL)
			printf("Age: %f\n", d->age);
		else
			("nil\n");

		if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
		else
			printf("nil\n");

	}
}
