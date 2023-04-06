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
	if (*s1 == '\0')
	{
		if (*s2 != '\0' && *s2 == '*')
		{
			return (wildcmp(s1, s2 + 1));
		}
		return(*s2 == '\0');
	}
	if (*s2 == '*')
	{
		return (wildcmp(s1 + 1, s2));
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}
