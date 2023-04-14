/*
* File: 0-malloc_checked.c
* Author: moamineayadi
*/
#include "main.h"
/**
 * malloc_checked - check if malloc gone right
 * @b: unsigned int
 *
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = (void *)malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
