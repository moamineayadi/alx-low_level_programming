/*
 * File: 2-strlen_recursion.c
 * Author: moamineayadi
*/

#include "main.h"

/**
 * _strlen_recursion - len
 *
 * @s: char
 *
 * Return: 0
 */


int _strlen_recursion(char *s)
{
	int ch;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		ch = _strlen_recursion(s + 1);
	}
	return (ch + 1);
}
