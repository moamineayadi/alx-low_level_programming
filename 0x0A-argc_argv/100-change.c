/*
* File: 100-change.c
* Author: moamineayadi
*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - minimum chok 8 mil minimum ahhaah
* @argc: int
* @argv: array
*
* Return: int
*/

int main(int argc, char **argv)
{
	int number;
	int count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	number = atoi(argv[1]);
	while (number > 0)
	{
		while (number >= 25)
		{
			number -= 25;
			count++;
		}
		while (number >= 10)
		{
			number -= 10;
			count++;
		}
		while (number >= 5)
		{
			number -= 5;
			count++;
		}
		while (number >= 2)
		{
			number -= 2;
			count++;
		}
		while (number >= 1)
		{
			number -= 1;
			count++;
		}
	}
	printf("%d\n", count);
	return (0);
}
