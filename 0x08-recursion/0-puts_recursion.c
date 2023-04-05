/*
 * File: 0-puts_recursion.c
 * Author: moamineayadi
*/

#include "main.h"

/**
 * _puts_recursion - Function
 * @s: char
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar(10);
	}
	else
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
}
