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

int main(int argc, char **argv)
{
	printf("%s\n", argc - 1);
	return (0);
}
