#ifndef DOG_HEADER
#define DOG_HEADER

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - dog struct datatype
 *
 * @name: name of dog
 * @age: dogs age
 * @owner: dog's owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};


/**
 * dog_t - new name for the type struct dog
 */
typedef struct dog dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
int _strlen(char *str);
char *_strcopy(char *dest, char *src);

#endif
