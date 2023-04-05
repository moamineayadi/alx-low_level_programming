/*
 * File: 1-print_rev_recursion.c
 * Author: moamineayadi
*/

#include "main.h"

/**
 * _print_rev_recursion - reverse
 *
 * @s: char
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
