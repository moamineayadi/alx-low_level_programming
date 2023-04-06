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
	if (n == 1)
	{
		return (1);
	}
	if (k > n / 2)
	{
		return (-1);
	}
	if (n != k * k)
	{
		return (_sqrt_(n, k+1));
	}
	if (n == k * k)
	{
		return (n);
	}
	return (-1);
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
