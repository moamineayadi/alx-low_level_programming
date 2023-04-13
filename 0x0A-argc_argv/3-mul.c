/*
* File: 3-mul.c
* Author: moamineayadi
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - multiplies two numbers
* @argc: int
* @argv: array
*
* Return: int
*/

int main(int argc, char **argv)
{
	int product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	product = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", product);
	return (0);
}
