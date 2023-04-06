/*
 * file: 6-is_prime_number.c
 * Author: moamineayadi
 */

#include "main.h"

/**
 * _primo_ - check if number is prime
 * @n: int
 * @k: int
 * Return: int
 */

int _primo_(int n, int k)
{
	if (n < 2)
	{
		return (0);
	}
	if ((n == 2) || (k >= n / 2))
	{
		return (1);
	}
	if (n % k == 0)
	{
		return (0);
	}
	else
	{
		return (_primo_(n, k + 1));
	}
	return (1);
}


/**
 * is_prime_number - check if number is prime
 * @n: int
 * Return: int
 */

int is_prime_number(int n)
{
	return (_primo_(n, 2));
}
