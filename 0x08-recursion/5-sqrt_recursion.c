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
	if ((n)-(k*k) <= 0)
		return(k)
	else
		_sqrt_(n,k+1);
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
