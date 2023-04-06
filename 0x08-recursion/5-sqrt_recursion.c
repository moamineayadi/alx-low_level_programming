/*
 * file: 5-sqer_recursion.c
 * Author: moamineayadi
 */

#include "main.h"

/*
 * _sqrt_ - Gives square root of number
 *
 * @n: int
 * @k: int
 *
 * Return: int
 */

int _sqrt_(int n, int k)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else if (k > n /2)
	{
		return (-1)
	}
	else if (n != k * k)
	{
		return (sqrt(n, k+1));
	}
	else if (n == k*k)
	{
		return (n);
	}
	else
	{
		return (-1);
	}
}

/*
 * _sqrt_recursion - Return sqrt of number
 *
 * @n: int
 *
 * Return: int
 */

int _sqrt_recursion(int n)
{
	return (_sqrt_(n,0));
}
