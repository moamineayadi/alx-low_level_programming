/*
 * File: 1-print_rev_recursion.c
 * Author: moamineayadi
*/

#include "main.h"

/**
 * _print_rev_recursion - reverse
 *
 * @ch: char
 * Return: Nothing
 */

void _print_rev_recursion(char *ch)
{
	if (*ch)
	{
		_print_rev_recursion(ch + 1);
		_putchar(*ch);
	}
}
