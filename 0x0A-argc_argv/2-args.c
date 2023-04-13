/*
* File: 2-args.c
* Author: moamineayadi
*/

#include <stdio.h>

/**
* main - prints all the args
* @argc: int
* @argv: array
*
* Return: int
*/

int main(int argc, char **argv)
{
	int i = 0;

	while (i++ < argc)
		printf("%s\n", *argv++);
	return (0);
}
