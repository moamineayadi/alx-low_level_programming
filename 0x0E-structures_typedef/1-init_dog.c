/*
* File: 1-init_dog.c
* Author: moamineayadi
*/

#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to the struct dog
 * @name: pointer to the name of the dog
 * @age: age of the dog
 * @owner: pointer to the owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
