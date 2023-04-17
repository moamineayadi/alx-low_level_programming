/*
* File: dog.h
* Author: moamineayadi
*/

#ifndef DOG
#define DOG

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

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG */
