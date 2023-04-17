/*
* File: 5-free_dogs.c
* Author: moamineayadi
*/
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees the memory allocated for a dog_t struct
 * @d: pointer to dog_t struct to free
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
