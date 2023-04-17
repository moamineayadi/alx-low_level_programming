/*
* File: dog.h
* Author: moamineayadi
*/

#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - a new type
 *
 * @name: dog's name
 * @age: dog's age
 * @owner: owner's name
 */

struct dog
{
	char *name;
	float age;
	char *owner;
}

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG */
