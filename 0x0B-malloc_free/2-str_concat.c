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
	char *pointerr;
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
	pointerr = malloc(1 + (sizeof(char) * i) + (sizeof(char) * j));
	if (pointerr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (s1[i])
	{
		pointerr[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		pointerr[i] = s2[j];
		i++;
		j++;
	}
	pointerr[i] = s2[j];
	return (pointerr);
}

