/*
 * File: 101-wildcmp.c
 * Author: moamineayadi
*/

#include "main.h"
#include <stdio.h>

/**
 * wildcmp - function compares two strings
 * @s1: char
 * @s2: char
 * Return int
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s == '\0')
	{
		return (1);
	}
	if (*s2 == *s1)
	{
		return (wildcmp(s1 + 1, s2 +1));
	}
	if (*s1 == '\0' || *s2 == '\0')
	{
		return (0);
	}
	return (0);
}
