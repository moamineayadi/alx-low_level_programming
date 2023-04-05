/*
 * file: 3-factorial.c
 * Author: moamineayadi
 */

#include "main.h"


/**
 * factorial - return factorial of a number
 *
 * @n: int to return his factorial
 *
 * Return: int
 *
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
