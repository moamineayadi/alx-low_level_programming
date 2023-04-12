/*
 * File: 0-create-array.c
 * Author: moamineayadi
 */
#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array
 * @size: unsigned int
 * @c: char
 *
 * Return: char
 *
 */

char *create_array(unsigned int size, char c)
{
	char *trd;
	unsigned int index = 0;

	if (size == 0)
	{
		return (NULL);
	}
	trd = malloc(size * sizeof(char));

	if (trd == NULL)
	{
		return (NULL);
	}

	while (index < size)
	{
		trd[index] = c;
		index++;
	}
	return (trd);
}
