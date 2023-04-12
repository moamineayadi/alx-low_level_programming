/*
 * File : 1-strdup.c
 * Author : moamineayadi
 */

#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - return a pointer to mem
 *
 * @str: string
 *
 * Return: char
 *
*/

char *_strdup(char *str)
{
	char *pointer;
	int size = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[size])
	{
		size++;
	}

	pointer = malloc(sizeof(char) * size + 1);

	if (pointer == NULL)
	{
		return (NULL);
	}

	size = 0;
	while (str[size])
	{
		pointer[size] = str[size];
		size++;
	}
	return (pointer);
}
