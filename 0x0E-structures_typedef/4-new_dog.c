#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creates a new dog
 *
 * @name: pointer
 * @owner: pointer
 * @age: float
 * Return: dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{

	int nr, or;
	dog_t *doggy = malloc(sizeof(dog_t));

	if (doggy == NULL)
    {
        return (doggy);
    }
		
	for (nr = 0; name[nr]; nr++)

	for (or = 0; owner[or]; or++)

	doggy->name = malloc((nr + 1) * sizeof(char));
	doggy->owner = malloc((or + 1) * sizeof(char));
	if (doggy->name == NULL || doggy->owner == NULL)
	{
		free(doggy->name);
		free(doggy->owner);
		free(doggy);
		return (NULL);
	}
	for (nr = 0; name[nr]; nr++)
    {
		doggy->name[nr] = name[nr];
    }
	for (or = 0; owner[or]; or++)
    {
        doggy->owner[or] = owner[or];
    }

	doggy->name[nr] = 0;
	doggy->owner[or] = 0;
	doggy->age = age;
	return (doggy);
}