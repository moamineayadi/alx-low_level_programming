/*
* File: 1-args.c
* Author: moamineayadi
*/

#include <stdio.h>

/**
* main - prints its name
* @argc: int
* @argv: array
*
* Return: returns the name.
*/

int main(int argc, char *argv[])
{
	if (argv[0])
		printf("%d\n", argc - 1);

	return (0);
}
