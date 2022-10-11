#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - a function that initialize a variable of type struct dog.
 * @d: struct to initialize
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of dog
 * Return: Nothing.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
		if (d == NULL)
			return;

		d->name = name;
		d->age = age;
		d->owner = owner;
}
