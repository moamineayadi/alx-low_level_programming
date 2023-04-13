/*
* File: 0-whatsmyname.c
* Author: moamineayadi
*/

#include <stdio.h>

/**
* main - prints its name
* @argc: int
* @argv: array
*
* Return: int.
*/

int main(int argc, char **argv)
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
