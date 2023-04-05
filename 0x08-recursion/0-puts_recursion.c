/*
 * File: 0-puts_recursion.c
 * Author: moamineayadi
 */

#include "main.h"

/**
 * _puts_recursion - Function
 * @c: char
 *
 * Return: Nothing
 */

void _puts_recursion(char *c)
{
	if (*c == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*c);
		c++;
		_puts_recursion(c);
	}
}
