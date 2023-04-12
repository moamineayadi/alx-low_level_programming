/*
* File: 2-str_concat.c
* Author: moamineayadi
*/

#include "main.h"
#include <stdlib.h>

/**
* str_concat - concat two strings
* @s1: string
* @s2: string
* Return: char
*/

char *str_concat(char *s1, char *s2)
{
	char *pointer;
	int i = 0;
	int j = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[i])
	{
		i++;
	}
	while (s2[j])
	{
		j++;
	}
	pointer = malloc(1 + (sizeof(char) * i) + (sizeof(char) * j));

	if (pointer == NULL)
	{
		return (NULL);
	}

	i = 0;
	j = 0;

	while (s1[i])
	{
		pointer[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		pointer[j] = s2[j];
		j++;
		i++;
	}
	return (pointer);
}

