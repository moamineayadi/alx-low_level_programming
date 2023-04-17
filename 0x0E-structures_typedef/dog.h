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
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}
	dog;

int _putchar(char c);

#endif /* DOG */