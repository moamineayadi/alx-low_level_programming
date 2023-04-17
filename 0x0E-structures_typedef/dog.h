/*
* File: dog.h
* Author: moamineayadi
*/

#ifndef DOG_H
#define DOG_H

/**
 * dog_t - Prototypes for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * struct dog - class for a dog
 *
 * @name: dog's name
 *
 * @age: dog's age
 *
 * @owner: owner's name
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif /* DOG */
