/*
* File: dog.h
* Author: moamineayadi
*/
#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - A struct representing a dog
 * @name: The dog's name
 * @age: The dog's age
 * @owner: The dog's owner's name
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

#endif /* DOG_H */
